#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int contenido(int a[], int b[], int a_t, int b_t);
void generaValores(int Datos[], int N);
void imprimir(int Datos[], int N);

int main(){
    int tam_a, tam_b;
    srand(time(0));

    printf("Tamaño del arreglo A: ");
    scanf("%d", &tam_a);
    int A[tam_a];
    generaValores(A, tam_a);
    imprimir(A, tam_a);


    printf("Tamaño del arreglo B: ");
    scanf("%d", &tam_b);
    int B[tam_b];
    generaValores(B, tam_b);
    imprimir(B, tam_b);

    contenido(A, B, tam_a, tam_b);

}

void generaValores(int Datos[], int N){

    for (int i = 0; i < N; i++){

        Datos[i]= rand()%10+1;

    }

}

int contenido(int a[], int b[], int a_t, int b_t) {
    int cont = 0;

    for (int i = 0; i < b_t; i++) {
        for (int j = 0; j < a_t; j++) { 
            if (b[i] == a[j]) {
                a[j] = -1;
                cont++;
                break;
            }
        }
    }

    if (cont == b_t) {
        printf("1 \n");
        return 1;
    } else {
        printf("0 \n");
        return 0;
    }
}

void imprimir(int Datos[], int N){

    for (int i = 0; i < N; i++){
        
        printf("%d, ", Datos[i]);

    }
    
    printf("\n");
}
