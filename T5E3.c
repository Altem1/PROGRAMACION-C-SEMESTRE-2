#include<stdio.h>

int main(){
    int n;
    printf("Ingresa N: ");
    scanf("%d", &n);

    //se recorre los renglones
    for (int i = 0; i<n; i++){
        
        //se recorre columnas
        for(int j=0; j<n; j++){
            //si i=j osea si es a11 o ann las partes entonces se pone el @
            if(i==j){
                printf("@");
            }else if(i+j==n-1){
                //si cuando sumamos i+j es lo mismo que n-1, otro arroba esto sirve para lo que esta dentro de n-1, n-1
                printf("@");
            }else{
                //para los espacios en blanco si no se encuentra arrobas, lo anterior lo vi como si fuera una matriz, sin usar una
                printf(" ");
            }
        }
        printf("\n");
    }

}