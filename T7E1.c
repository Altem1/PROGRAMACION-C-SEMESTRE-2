#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20
int suma_elem_mayor(int Datos[], int n, int n_comp);
void generaValores(int Datos[]);
void imprimir(int Datos[], int n, int n_comp, int suma);

int main(){
    
    int Datos[N];
    int n_comp, suma;
    srand(time(0));
    printf("Ingresa el numero entre 1 y 20: ");
    scanf("%d", &n_comp);
    generaValores(Datos);
    suma = suma_elem_mayor(Datos, N, n_comp);
    imprimir(Datos, N, n_comp, suma);
}

void generaValores(int Datos[]){

    for (int i = 0; i < n; i++){
        Datos[i]=rand()%20+1;
    }

}

int suma_elem_mayor(int Datos[], int n, int n_comp){

    int suma=0;

    for (int i = 0; i < n; i++){
        
        if(Datos[i] > n_comp){
            suma=suma+Datos[i];
        }

    }
    
    return suma;
}

void imprimir(int Datos[], int n, int n_comp, int suma){

    printf("La suma de los valores del arreglo \n");

    for (int i = 0; i < n; i++){
        printf("[ %d ]", Datos[i]);
    }
    printf("\n \n");
    printf("Que son mayores a %d es: \n", n_comp);
    for (int i = 0; i < n; i++){

        if (Datos[i] > n_comp){

            if(i < n-1){
                printf("%d + ", Datos[i]);    
            }else{
                printf(" %d ", Datos[i]);
            }

        }

    }

    printf(" = %d \n", suma);

}