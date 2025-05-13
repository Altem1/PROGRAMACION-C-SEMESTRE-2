#include <windows.h>
#include <stdio.h>
#include <wbemidl.h>
#pragma comment(lib, "wbemuuid.lib")

int main() {
    HRESULT hr;

    // 1. Inicializar COM (¡esto es esencial!)
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
        CLSID_WbemLocator,
        0,
        CLSCTX_INPROC_SERVER,
        IID_IWbemLocator,
        (LPVOID*)&pLoc
    );
    if (FAILED(hr)) {
        printf("Error al crear instancia WMI: 0x%08X\n", hr);
        CoUninitialize();
        return 1;
    }

    IWbemServices *pSvc = NULL;
    hr = pLoc->ConnectServer(
        BSTR(L"ROOT\\CIMV2"), // Namespace de WMI
        NULL,
        NULL,
        0,
        0,
        0,
        0,
        &pSvc
    );
    if (FAILED(hr)) {
        printf("Error al conectar a WMI: 0x%08X\n", hr);
        pLoc->Release();
        CoUninitialize();
        return 1;
    }

    // 4. Ejecutar consulta WMI
    IEnumWbemClassObject* pEnumerator = NULL;
    hr = pSvc->ExecQuery(
        BSTR(L"WQL"),
        BSTR(L"SELECT * FROM Win32_LocalTime"),
        WBEM_FLAG_FORWARD_ONLY,
        NULL,
        &pEnumerator
    );
    if (FAILED(hr)) {
        printf("Error en consulta WMI: 0x%08X\n", hr);
        pSvc->Release();
        pLoc->Release();
        CoUninitialize();
        return 1;
    }

    // 5. Mostrar resultados en consola
    IWbemClassObject *pclsObj = NULL;
    ULONG uReturn = 0;
    printf("=== Información del sistema (usando COM/WMI) ===\n");

    while (pEnumerator) {
        hr = pEnumerator->Next(WBEM_INFINITE, 1, &pclsObj, &uReturn);
        if (uReturn == 0) break;

        VARIANT vtProp;
        hr = pclsObj->Get(L"Hour", 0, &vtProp, NULL, NULL);
        printf("Hora actual: %d:", vtProp.intVal);
        VariantClear(&vtProp);

        hr = pclsObj->Get(L"Minute", 0, &vtProp, NULL, NULL);
        printf("%d:", vtProp.intVal);
        VariantClear(&vtProp);

        hr = pclsObj->Get(L"Second", 0, &vtProp, NULL, NULL);
        printf("%d\n", vtProp.intVal);
        VariantClear(&vtProp);

        pclsObj->Release();
    }

    // 6. Liberar recursos COM
    pEnumerator->Release();
    pSvc->Release();
    pLoc->Release();
    CoUninitialize();

    printf("\n¡COM se usó correctamente!\n");
    system("pause");
    return 0;
}