#include<stdio.h>

int main(void){

    int n, f=1, f0=0, f1=1;

    printf("Ingresa la cantidad de numero que quieres de la serie de fibonacci: ");
    scanf("%d", &n);

    for(int i=0; i<n-1; i++){
        
        if(i==0){
            printf("El 1 numero de la serie de fibonacci es: %d \n", f0);
            printf("El 2 numero de la serie de fibonacci es: %d \n", f1);
        }
        
        f=f0+f1;
        printf("El %d numero de la serie de fibonacci es: %d \n", i+2 ,f);

        f0=f1;
        f1=f;

    }
    

}