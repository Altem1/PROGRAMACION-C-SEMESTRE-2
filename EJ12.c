#include <stdio.h>

int main(){

    int n, u, d, cont=0;

    printf("Ingresa las pulgadas del pozo: ");
    scanf("%d", &n);
    printf("Ingresa las pulgadas que sube por minuto: ");
    scanf("%d", &u);
    printf("Ingresa cuantas pulgadas baja por minuto: ");
    scanf("%d", &d);

    while(n > 0){

        n=n-u;

        if ( cont%2 != 0 ){
            n=n+d;
            cont++;
        }

        cont++;

    }

    printf("%d", cont);

    return 0;

}