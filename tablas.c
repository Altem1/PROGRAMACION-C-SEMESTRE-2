#include <stdio.h>

int main(){

    int dato, cont=1;

    printf("Ingresa un valor: ");
    scanf("%d", &dato);

    while (cont <= 10){
        
        printf("%d x %d = %d\n", dato, cont, dato*cont);
        cont++;
    }
    
    return 0;

}