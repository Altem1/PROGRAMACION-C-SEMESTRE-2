#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generaValores(int Datos[], int N);
void imprimir_array(int Datos[], int N);
int saltos(int Datos[], int N);

int main(){

    int tam, sal;
    srand(time(0));
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &tam);
    int Datos[tam];

    generaValores(Datos, tam);
    imprimir_array(Datos, tam);
    sal=saltos(Datos, tam);
    printf("%d \n", sal);
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

int saltos(int Datos[], int N) {
    int posicion = 0, saltos = 0, max=N*2;

    while ( saltos <= max) {
        if (posicion == N - 1) {
            //printf("Ya llegamos a la ultima posicion y dimos %d saltos\n", saltos);
            return saltos;
        }
        
        if (Datos[posicion] > 0 && (posicion + Datos[posicion] <= N - 1)) {
            //printf("Estamos en [%d] que tiene un %d, saltamos %d posiciones a la derecha\n", posicion, Datos[posicion], Datos[posicion]);    
            posicion += Datos[posicion];
            saltos++;
        }
        else if (Datos[posicion] < 0 && (posicion + Datos[posicion] >= 0)) {
            //printf("Estamos en [%d] que tiene un %d, saltamos %d posiciones a la izquierda\n", posicion, Datos[posicion], Datos[posicion]);    
            posicion += Datos[posicion];
            saltos++;
        }
        else if (Datos[posicion] == 0) {
            //printf("Estamos en posicion [%d] que tiene un %d, nos atoramos sin llegar a la meta\n", posicion, Datos[posicion]);
            saltos=-1;
            return saltos;
        }
        else if (posicion + Datos[posicion] < 0) {
            //printf("Estamos en [%d] que tiene un %d, si saltamos a la izquierda nos salimos del arreglo\n", posicion, Datos[posicion]);
            saltos=-1;
            return saltos;
        }
        else if (posicion + Datos[posicion] > N - 1) {
            //printf("Estamos en [%d] que tiene un %d, si saltamos a la derecha nos salimos del arreglo\n", posicion, Datos[posicion]);
            saltos=-1;
            return saltos;
        }
    }
    saltos=-1;
    return saltos;
}