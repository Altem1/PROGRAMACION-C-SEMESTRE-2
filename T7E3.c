#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generaValores(int Datos[], int N);
void imprimir_array(int Datos[], int N);
void saltos(int Datos[], int N);

int main(){

    int tam;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &tam);
    int Datos[tam];

    generaValores(Datos, tam);
    imprimir_array(Datos, tam);
}

void generaValores(int Datos[], int N){

    for (int i = 0; i < N; i++){

        Datos[i]= (rand() % ( 2 * N + 1 )) - N;

    }

}

void imprimir_array(int Datos[], int N){

    printf("El arreglo generado aleatoriamente es: \n");

    for (int i = 0; i < N; i++){

        printf("%d ", Datos[i]);

    }

    printf("\n");
}

void saltos(int Datos[], int N){

    int posicion=0, saltos=0;

    do{
        
        if (Datos[posicion] > 0){

            printf("Estamos en [%d] que tiene un %d, saltamos %d posiciones a la derecha \n", posicion, Datos[posicion], Datos[posicion]);    

        }else if(Datos[posicion] < 0){

            printf("Estamos en [%d] que tiene un %d, saltamos %d posiciones a la izquierda \n", posicion, Datos[posicion], Datos[posicion]);    

        }else if( Datos[posicion] == 0 && posicion == 0 ){

            printf("Estamos en posicion %d que tiene un %d, nos atoramos sin llegar a la meta", posicion, Datos[posicion]);

        }else if( Datos[0] < 0  ){

            printf("Estamos en 0 que tiene un %d, si saltamos a la izquierda nos salimos del arreglo");
            return 1;

        }
        

    } while ( posicion != N - 1 );
    

}