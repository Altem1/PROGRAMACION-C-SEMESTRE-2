#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimir(int Arr[], int tam);
void generar(int Arr[],int tam);
void intercambio(int A[], int B[], int tam);

int main(){
    srand(time(0));
    int tam;
    printf("Ingresa el tamaño de los arreglos: ");
    scanf("%d", &tam);

    int A[tam], B[tam];

    printf("Arreglos originales: \n \n");
    generar(A, tam);
    imprimir(A, tam);
    generar(B, tam);
    imprimir(B, tam);

    intercambio(A, B, tam);
    printf("Arreglos intercambiados: \n \n");
    imprimir(A, tam);
    imprimir(B, tam);

}

void imprimir(int Arr[], int tam){

    for (int i = 0; i < tam; i++){
        
        printf("[ %d ]", Arr[i]);

    }
    printf("\n");

}

void generar(int Arr[],int tam){

    for (int i = 0; i < tam; i++){
        
        Arr[i]=rand()%10+1;

    }
    

}

void intercambio(int A[], int B[], int tam){
    int temp_A, temp_B;

    for (int i = 0; i < tam; i++){
        
        temp_A = A[i];
        temp_B = B[i];

        A[i] = temp_B;
        B[i] = temp_A;

    }
    

}