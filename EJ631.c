#include <stdio.h>

int main(void){

    int n, j=2, l=1;

    printf("Ingresa el numero de elemtos de la sucesion a mostrar: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){

        printf("%d, ", l);
        l=l+j;
        j++;

    }

    return 0;

}