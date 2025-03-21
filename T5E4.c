#include <stdio.h>

int main(){

    int c, t, n;
    float ventas_tienda=0, ventas_ciudad=0, ventas_cadena=0, venta_empleado;

    printf("Ingresa la cantidad de ciudad en las que hay tiendas: ");
    scanf("%d", &c);
    //Aqui suponemos que en cada ciudad hay la misma cantidad de tiendas para evitar usar arreglos
    printf("Ingresa la cantidad de tiendas por ciudad: ");
    scanf("%d", &t);
    //Aqui igual suponemos que cada tienda tiene la misma cantidad de empleados evitando usar arreglos
    printf("Ingresa la cantidad de empleados por tienda: ");
    scanf("%d", &n);

    //Primero hacemos el for para las ciudades
    for(int i=1; i<=c; i++){

        //Segundo se hace el for para cada tienda de i ciudad
        for(int j=1; j<=t; j++){

            //Tercero se hace el for para cada empleado k de la tienda j de la ciudad i
            for(int k=1; k<=n; k++){

                //los resultados se tienen que mostrar en tiempó real para evitar el uso de arreglos
                printf("Ingresa la venta del empleado %d de la tienda %d de la ciudad %d: ", k, j, i);
                scanf("%f", &venta_empleado);
                printf("\n");
                //Se registra las ventas en la tienda por cada empleado
                ventas_tienda=ventas_tienda+venta_empleado;
            }

            //para que solo se muestre cuando termine k y j
            if(j<=t){
                printf("Venta total de la tienda %d de los %d empleados es de: %.2f: \n", j, n, ventas_tienda);
                //se registra las ventas en la ciudad
                ventas_ciudad=ventas_ciudad+ventas_tienda;
                //se reinicia para la sig tienda
                ventas_tienda=0;
            }

        }
        ventas_cadena=ventas_cadena+ventas_ciudad;
        printf("Venta total de la ciudad %d de las %d tiendas es de: %.2f: \n", i, t, ventas_ciudad);
        //se reinicia para la sig tienda
        ventas_ciudad=0;
    }
    //Se imprime lo total vendido en la cadena
    printf("Las ventas de la cadena fueron de: %.2f", ventas_cadena);

}