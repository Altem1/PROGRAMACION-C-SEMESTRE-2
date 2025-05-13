#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

void generaValores(int Datos[]);
void imprimeArreglo(int Datos[]);
int sumaPares(int Datos[]);
void imprime(int suma);

int main(){

    int A[N], S;
    srand(time(0));
    generaValores(A);
    imprimeArreglo(A);
    S=sumaPares(A);
    imprime(S);

}

void generaValores(int Datos[]){

    for (int i = 0; i < N; i++){
        Datos[i]=rand()%10+1;
    }

}

void imprimeArreglo(int Datos[]){

    for (int i = 0; i < N; i++){
        printf("%d, ", Datos[i]);
    }

}

int sumaPares(int Datos[]){
    int suma=0;
    for (int i = 0; i < N; i++){
        if(Datos[i]%2==0){
            suma=suma+Datos[i];
        }
    }
    return suma;
}

void imprime(int suma){
    printf("\n\nLa suma del los pares del arreglo es %d\n", suma);
}