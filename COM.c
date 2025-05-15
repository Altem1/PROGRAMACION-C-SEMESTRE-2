#include <windows.h>
#include <stdio.h>
#include <wbemidl.h>
#include <oleauto.h>

// Definiciones necesarias para MinGW
#ifndef BSTR
#define BSTR LPWSTR
#endif

int main() {
    HRESULT hr;

    // 1. Inicializar COM
    hr = CoInitializeEx(0, COINIT_MULTITHREADED);
    if (FAILED(hr)) {
        printf("Error al inicializar COM: 0x%08X\n", hr);
        return 1;
    }

    // 2. Inicializar seguridad WMI
    hr = CoInitializeSecurity(
        NULL,
        -1,
        NULL,
        NULL,
        RPC_C_AUTHN_LEVEL_DEFAULT,
        RPC_C_IMP_LEVEL_IMPERSONATE,
        NULL,
        EOAC_NONE,
        NULL
    );
    if (FAILED(hr)) {
        printf("Error en seguridad COM: 0x%08X\n", hr);
        CoUninitialize();
        return 1;
    }

    // 3. Conectar a WMI
    IWbemLocator *pLoc = NULL;
    hr = CoCreateInstance(
        &CLSID_WbemLocator,
        NULL,
        CLSCTX_INPROC_SERVER,
        &IID_IWbemLocator,
        (LPVOID*)&pLoc
    );
    if (FAILED(hr)) {
        printf("Error al crear instancia WMI: 0x%08X\n", hr);
        CoUninitialize();
        return 1;
    }

    IWbemServices *pSvc = NULL;
    hr = pLoc->lpVtbl->ConnectServer(
        pLoc,
        L"ROOT\\CIMV2",
        NULL,
        NULL,
        NULL,
        0,
        0,
        0,
        &pSvc
    );
    if (FAILED(hr)) {
        printf("Error al conectar a WMI: 0x%08X\n", hr);
        pLoc->lpVtbl->Release(pLoc);
        CoUninitialize();
        return 1;
    }

    // 4. Ejecutar consulta WMI
    IEnumWbemClassObject* pEnumerator = NULL;
    hr = pSvc->lpVtbl->ExecQuery(
        pSvc,
        L"WQL",
        L"SELECT * FROM Win32_LocalTime",
        WBEM_FLAG_FORWARD_ONLY,
        NULL,
        &pEnumerator
    );
    if (FAILED(hr)) {
        printf("Error en consulta WMI: 0x%08X\n", hr);
        pSvc->lpVtbl->Release(pSvc);
        pLoc->lpVtbl->Release(pLoc);
        CoUninitialize();
        return 1;
    }

    // 5. Mostrar resultados en consola
    IWbemClassObject *pclsObj = NULL;
    ULONG uReturn = 0;
    printf("=== Informacion del sistema (usando COM/WMI) ===\n");

    while (1) {
        hr = pEnumerator->lpVtbl->Next(
            pEnumerator,
            WBEM_INFINITE,
            1,
            &pclsObj,
            &uReturn
        );
        if (FAILED(hr) || uReturn == 0) break;

        VARIANT vtProp;
        VariantInit(&vtProp);
        
        hr = pclsObj->lpVtbl->Get(
            pclsObj,
            L"Hour",
            0,
            &vtProp,
            NULL,
            NULL
        );
        if (SUCCEEDED(hr)) {
            printf("Hora actual: %d:", vtProp.intVal);
            VariantClear(&vtProp);
        }

        hr = pclsObj->lpVtbl->Get(
            pclsObj,
            L"Minute",
            0,
            &vtProp,
            NULL,
            NULL
        );
        if (SUCCEEDED(hr)) {
            printf("%d:", vtProp.intVal);
            VariantClear(&vtProp);
        }

        hr = pclsObj->lpVtbl->Get(
            pclsObj,
            L"Second",
            0,
            &vtProp,
            NULL,
            NULL
        );
        if (SUCCEEDED(hr)) {
            printf("%d\n", vtProp.intVal);
            VariantClear(&vtProp);
        }

        pclsObj->lpVtbl->Release(pclsObj);
    }

    // 6. Liberar recursos COM
    pEnumerator->lpVtbl->Release(pEnumerator);
    pSvc->lpVtbl->Release(pSvc);
    pLoc->lpVtbl->Release(pLoc);
    CoUninitialize();

    printf("\n¡COM se uso correctamente!\n");
    system("pause");  // <-- Esto mantendrá abierta la consola en Windows
    return 0;
}