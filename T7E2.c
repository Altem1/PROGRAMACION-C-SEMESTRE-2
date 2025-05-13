#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
void generaValores(int Datos[]);
void imprimir(int Datos[]);
void intercambiar_M_m(int Datos[]);

int main(){

    int Datos[N];
    int mayor=0, menor=30;
    srand(time(0));
    generaValores(Datos);
    printf("Original: \n");
    imprimir(Datos);
    intercambiar_M_m(Datos);
    printf("Intercambio: \n");
    imprimir(Datos);
}

void generaValores(int Datos[]){

    for (int i = 0; i < N; i++){
        Datos[i]=rand()%20+1;
    }

}

void imprimir(int Datos[]){

    for(int i=0; i < N; i++){

        printf("[ %d ]", Datos[i]);

    }
    printf("\n \n");
}

void intercambiar_M_m(int Datos[]){

    int menor=0, mayor=0;

    for(int i=1; i < N; i++){

        if(Datos[i] > Datos[mayor]){

            mayor=i;

        }else if(Datos[i] < Datos[menor]){

            menor=i;

        }

    }
    
    if (mayor == 0) {
        mayor = menor;
    }

    int temp = Datos[0];
    Datos[0]=Datos[menor];
    Datos[menor]=temp;

    temp=Datos[N-1];
    Datos[N-1]=Datos[mayor];
    Datos[mayor]=temp;

}