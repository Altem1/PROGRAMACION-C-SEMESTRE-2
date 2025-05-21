#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void captura_arreglo(int Horas[], int Minutos[], int alumnos);
void generar(int A[], int al);
void imprimir(int A[], int al);
void mas_rapido(int Horas[], int Minutos[], int alumnos, int *rapido);
void seleccionar(void);

int main() {
    seleccionar();
    return 0;
}

void seleccionar(void) {
    int seleccion, alumnos, rapido;
    
    printf("Menu \n    1.- Generar Aleatoriamente\n    2.-Ingresar datos manualmente\n     [ 1 / 2 ]: ");
    scanf("%d", &seleccion);

    switch (seleccion) {
    case 1: {
        printf("Ingresa el tamaño del grupo: ");
        scanf("%d", &alumnos);
        int horas[alumnos], minutos[alumnos];
        
        generar(horas, alumnos);
        imprimir(horas, alumnos);
        generar(minutos, alumnos);
        imprimir(minutos, alumnos);
        mas_rapido(horas, minutos, alumnos, &rapido);
        printf("El alumno mas rapido fue el %d con %d Horas y %d minutos.\n", rapido+1, horas[rapido], minutos[rapido]);
        break;
    }
    case 2: {
        printf("Ingresa el tamaño del grupo: ");
        scanf("%d", &alumnos);
        int horas[alumnos], minutos[alumnos];
        
        captura_arreglo(horas, minutos, alumnos);
        printf("Los datos ingresados son: \n");
        imprimir(horas, alumnos);
        imprimir(minutos, alumnos);
        mas_rapido(horas, minutos, alumnos, &rapido);
        printf("El alumno mas rapido fue el %d con %d Horas y %d minutos.\n", rapido+1, horas[rapido], minutos[rapido]);
        break;
    }
    default:
        printf("\nOpcion no valida, ingresa de nuevo\n\n");
        seleccionar();
        break;
    }
}

void captura_arreglo(int Horas[], int Minutos[], int alumnos){

    for(int i = 0; i < alumnos; i++){

        printf("Ingresa las horas del alumno %d: ", i+1);
        scanf("%d", &Horas[i]);
        printf("Ingresa los minutos del alumno %d: ", i+1);
        scanf("%d", &Minutos[i]);
        printf("\n");
    }

}

void generar(int A[], int al){

    for (int i = 0; i < al; i++){
        
        A[i]=rand()%59+1;

    }
    

}

void imprimir(int A[], int al){

    for (int i = 0; i < al; i++){
        
        printf("[ %d ]", A[i]);

    }
    printf("\n\n");

}

void mas_rapido(int Horas[], int Minutos[], int alumnos, int *rapido){

    *rapido=0;
    int band1=0, band2=0;

    for (int i = 1; i < alumnos; i++){
        
        if( Horas[i] < Horas[*rapido] ){
            *rapido=i;
        }else if( Horas[i] == Horas[*rapido] && Minutos[i] < Minutos[*rapido] ){
            *rapido=i;
        }

    }
    

}