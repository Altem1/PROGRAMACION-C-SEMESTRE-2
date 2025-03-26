#include <stdio.h>

int main(void){

    int n, ele=1;

    printf("Ingresa el numero de elemtos de la sucesion a mostrar: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){

        printf("%d, ", ele);

        ele=ele*2;

    }

    return 0;

}