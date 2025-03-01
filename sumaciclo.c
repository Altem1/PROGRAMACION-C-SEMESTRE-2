#include <stdio.h>

int main(){

    int cont=0, suma=0, n1, n2;

    printf("Ingresa el primero numero: ");
    scanf("%d", &n1);
    printf("Ingresa numero por cual multiplicar: ");
    scanf("%d", &n2);

    while (cont < n2){
        
        suma=suma+n1;
        cont++;

    }
    
    printf("La multiplicacion %d X %d = %d ", n1, n2, suma);

    return 0;

}