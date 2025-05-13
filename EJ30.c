#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

void generaValores(int Datos[]);
void intercambia(int Datos[]);
void imprimir(int Datos[]);

int main(){

    int Datos[N];
    generaValores(Datos);
    imprimir(Datos);
    intercambia(Datos);
    imprimir(Datos);

    return 0;
}

void generaValores(int Datos[]){

    for (int i = 0; i < N; i++){
        Datos[i]=rand()%20+1;
    }

}

void intercambia(int Datos[]){

    int k;

    for (int i = 0; i < N/2; i++){
     
        k=Datos[i];
        Datos[i]=Datos[N-1-i];
        Datos[N-1-i]=k;

    }

}

void imprimir(int Datos[]){
    printf("\n");
    for (int i = 0; i < N; i++){
        printf("%d, ", Datos[i]);
    }
    printf("\n");
}