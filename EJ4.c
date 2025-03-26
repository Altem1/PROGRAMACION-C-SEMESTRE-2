#include <stdio.h>

int main(){

    float paga;
    int lapices;

    printf("Ingresa la cantidad de lapices: ");
    scanf("%d", &lapices);

    if(lapices >= 1000){

        paga=lapices*4.85;

    } else{
        paga=lapices*6.75;
    }

    printf("La cantidad de dinero que debes pagar es: $ %.2f", paga);

    return 0;

}