#include <stdio.h>

int main(){

    int n, suma=0, x;

    printf("Ingresa un valor entero: ");
    scanf("%d", &n);

    while (n>0){

        x=n%10;
        suma=suma+x;
        n=n/10;
    }

    printf("La suma es: %d", suma);

    return 0;

}