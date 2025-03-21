#include <stdio.h>

int main(){

    int n, cont=0;

    printf("Ingresa hasta donde mostrara: ");
    scanf("%d", &n);
    
    printf("1, ");
    //Solo es el for para mostra
    for(int i=1; i<=n-1; i++){

        cont=0;
        
        for(int j=2; j<i; j++){
            
            //verificar si es primo
            if(i%j!=0){
                cont=1;
            }else{
                cont=0;
                break;
            }

        }

        if(cont==1){
            printf("%d, ", i);
        }

    }
    return 0;

}