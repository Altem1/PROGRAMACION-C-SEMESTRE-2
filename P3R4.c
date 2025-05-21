#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void Genera(int Arr[]);
void F_grande(int Deci[], int flota[], int *deci, int *flotaa);
void imprimir(int arr[]);

int main(){
    srand(time(0));
    int deci, flotaa;
    int A[N];
    int B[N];
    Genera(A);
    imprimir(A);
    Genera(B);
    imprimir(B);
    F_grande(A, B, &deci, &flotaa);
    printf("\n %d.%d \n", A[deci], B[flotaa]);
}

void Genera(int Arr[]){

    for (int i = 0; i < N; i++){
        
        Arr[i]=rand()%10+1;

    }

}

void F_grande(int Deci[], int flota[], int *deci, int *flotaa){

    *deci=0; 
    *flotaa=0;

    for (int i = 1; i < N; i++){
        
        if (Deci[i]>Deci[*deci]){
            *deci=i;
        }
        if (flota[i]>flota[*flotaa]){
            *flotaa=i;
        }
    }
}

void imprimir(int arr[]){

    for (int i = 0; i < N; i++){
        
        printf("[ %d ]", arr[i]);

    }
    printf("\n\n");

}