#include <stdio.h>
#define N 5

int Array(char car[], char caracter);

int main(){
    int posicion;
    char caracter;
    char car[]={"a","a","e","i","o"};
    printf("Que letra buscas? ");
    scanf("%c", &caracter);

    posicion=Array(car, caracter);

    return 0;
}

int Array(char car[], char caracter){

    int posicion=-1;

    for (int i = 0; i < N; i++){
        
        if (car[i]==caracter){
            
            posicion=i;

        }

    }

    return posicion;

}

void imprimir(char car[]){

    for (int i = 0; i < N; i++){
        
        printf("%c", car[i]);

    }
    

}