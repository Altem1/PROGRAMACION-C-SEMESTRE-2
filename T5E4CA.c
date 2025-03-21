//El mismo problema 4 pero con arreglos controlando finamente la cantidad de empleados y tiendas.
#include<stdio.h>

int main(){

    int c, t, n;
    float ventas_tienda=0, ventas_ciudad=0, ventas_cadena=0, venta_empleado;

    printf("Ingresa la cantidad de ciudad en las que hay tiendas: ");
    scanf("%d", &c);
    for (int i = 1; i < c; i++){
        int arrayC[i-1]=i;

        printf("Ingresa la cantidad de tiendas en la ciudad %d : ", i);
        for(int j=1; j < i; j++){
            int arrayT[i-1]=scanf("%d", &t);

            printf("Ingresa la cantidad de empleados en la tienda %d de la ciudad %d: ",j, i );
            for (int k = 1; i <= j; k++){
                int arratE[i-1]=scanf("%d", n);
            }
        
        }
    }

}