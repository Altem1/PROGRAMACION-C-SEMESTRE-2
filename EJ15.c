#include <stdio.h>

int main(void){

    int n, l=0, j;

    printf("Ingresa el numero de elemtos de la sucesion a mostrar: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        j=4;
        printf("%d, ", l);
        j=j*i;
        l=l+j;

    }

    return 0;

}