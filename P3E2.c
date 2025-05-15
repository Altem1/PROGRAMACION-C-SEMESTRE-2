#include<stdio.h>

int array(int escap[]);

int main(){

    int tam, capicua;
    printf("Tamaño del arreglo mayor a 1 pero menor a 1000: ");
    scanf("%d", &tam);
    int escap[tam];
    capicua=array(escap);
    
}

int array(int escap[]){

    for (int i = 0; i < N/2; i++){
        
        if (escap[i]!=escap[N-1-i]){
            return 0;
        }
    }

    return 1;
}