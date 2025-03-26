#include <stdio.h>

int main(){

    int cont=0, residuo=0, n1, n2;

    printf("Ingresa el primero numero: ");
    scanf("%d", &n1);
    printf("Ingresa numero por cual dividir: ");
    scanf("%d", &n2);

    while ( n1 >= n2 ){
        
        n1=n1-n2;
        cont++;

    }
    
    printf("Cociente: %d\nResiduo: %d", cont, n1);

    return 0;

}