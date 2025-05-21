#include <stdio.h>
#include <stdlib.h>

#define N 20

void Genera(int Arr[]);
void imprime(int Arr[]);
void Calcula(int A[], int B[], int C[]);

int main(){

    int A[N], B[N], C[N];

    Genera(A);
    imprime(A);
    Genera(B);
    imprime(B);
    Calcula(A, B, C);
    imprime(C);

}

void Genera(int Arr[]){

    for (int i = 0; i < N; i++){
        
        Arr[i]=rand()%N+1;

    }
    

}

void imprime(int Arr[]){

    for (int i = 0; i < N; i++){
        printf("[ %d ] ", Arr[i]);
    }
    printf("\n\n");

}

void Calcula(int A[], int B[], int C[]){

    for (int i = 0; i < N; i++){
        
        if (A[i]==B[i]){
            C[i]==A[i];
        }else if(B[i]>A[i]){
            C[i]=(B[i]-A[i])*2;
        }else if (A[i]>B[i]){
            C[i]=B[i];
        }

    }
    

}

