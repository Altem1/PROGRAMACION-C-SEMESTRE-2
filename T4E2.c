#include <stdio.h>

int main(){

    int N, mayor1000=0, ma500me1000=0, mei500=0;
    float articulo_precio, ve1000=0, ve500o1000=0, ve500=0, vendido_total;

    printf("Ingresa la cantidad de ventas del dia: ");
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++){
        
        printf("Ingresa el valor de la venta numero %d: ",i);
        scanf("%f", &articulo_precio);

        if (articulo_precio>1000){
            mayor1000++;
            ve1000=ve1000+articulo_precio;
        }else if (articulo_precio>500 && articulo_precio<1000){
            ma500me1000++;
            ve500o1000=ve500o1000+articulo_precio;
        }else if(articulo_precio<=500){
            mei500++;
            ve500=ve500+articulo_precio;
        }
        
    }
    
    vendido_total=ve1000+ve500+ve500o1000;

    printf("\nVentas mayores a $1000: %d \nTotal de las ventas mayores a $1000: %.2f \n", mayor1000, ve1000);
    printf("Ventas mayores a $500 y menores a $1000: %d \nTotal de las ventas mayores a $500 y menores a $1000: %.2f \n", ma500me1000, ve500o1000);
    printf("Ventas menores o igual a $500: %d \nTotal de las ventas menores o iguales a $500: %.2f \n", mei500, ve500);
    printf("\n \nEn total se vendio: $%.2f\n", vendido_total);

}