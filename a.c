#include<stdio.h>
#include<math.h>
#include<locale.h>
#include<stdlib.h>  // Para usar system()

// Función para limpiar la pantalla
void limpiar_pantalla() {
    system("cls"); 
}

int main()
{
    float precio_articulo, pago_cliente, cambio;
    
    do {

        printf("Ingrese el precio del artículo (o un valor negativo para salir): ");
        scanf("%f", &precio_articulo);

        // Si el precio es negativo, salimos del ciclo
        if (precio_articulo < 0) {
            printf("Saliendo del programa...\n");
            break;
        }
        
        printf("¿Cuánto ha pagado el cliente?: ");
        scanf("%f", &pago_cliente);

        // Mostrar resultado antes de limpiar la pantalla
        if (pago_cliente < precio_articulo) {
            printf("El cliente no tiene suficiente dinero. Faltan %.2f para completar el pago.\n", precio_articulo - pago_cliente);
        } else {
            cambio = pago_cliente - precio_articulo;
            printf("El cambio a dar es: %.2f\n", cambio);
        }
        
        // Pausa para que el usuario vea el resultado antes de limpiar la pantalla
        printf("\nPresione Enter para continuar...\n");
        getchar();  // Espera a que el usuario presione Enter

        // Limpiar pantalla después de que el usuario haya visto el resultado
        limpiar_pantalla();
        
    } while (precio_articulo >= 0);  // El ciclo sigue hasta que el precio sea negativo

    return 0;
}