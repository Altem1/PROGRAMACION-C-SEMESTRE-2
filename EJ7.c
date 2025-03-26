#include <stdio.h>

int main(void){

    int dato, suma=0, cont=0;

    while (suma <= 100){
        
        printf("Ingresa un numero entero: ");
        scanf("%d", &dato);
        suma=suma+dato;
        cont++;

    }

    printf("La suma es de: %d \n", suma);
    printf("El promedio es: %d", suma/cont);

    return 0;
    
}