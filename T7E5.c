#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void leer(int *N, int *G);
void imprimir(int Datos[], int N);
void generaValores(int Datos[], int N);
void mover(int Datos[], int N);

int main(){
    int N, G, cont=0;
    leer(&N, &G);
    int A[N];
    generaValores(A, N);

    //Cuantas veces se repetira
    printf("Arreglo original: \n");
    imprimir(A, N);

    printf("Arreglo movido a la derecha %d veces: \n \n", G);
    do{
        mover(A, N);
        imprimir(A, N);
        cont++;
    }while(cont != G);

}

void mover(int Datos[], int N){

    int tempF=Datos[N-1], tempI=Datos[0];

    for (int i = 0; i < N; i++){
        Datos[i]=tempF;
        tempF=tempI;
        tempI=Datos[i+1];
    }
    

}

void leer(int *N, int *G){

    printf("Tamaño del arreglo: ");
    scanf("%d", N);
    printf("Cuantas veces se girara el arreglo a la derecha: ");
    scanf("%d", G);

}

void imprimir(int Datos[], int N){

    for (int i = 0; i < N; i++){
        printf("[ %d ]", Datos[i]);
    }
    
    printf("\n");
}

void generaValores(int Datos[], int N){

    for (int i = 0; i < N; i++){

        Datos[i]= rand()%10+1;

    }

}