#include <stdio.h>

int main(void){

    float e1, e2, e3, t1, t2, t3, cale, calt, calgen, prome;

    printf("Ingresa la calificacion de tu primer tarea: ");
    scanf("%f", &t1);
    printf("Ingresa la calificacion de tu segunda tarea: ");
    scanf("%f", &t2);
    printf("Ingresa la calificacion de tu tercera tarea: ");
    scanf("%f", &t3);

    printf("Ingresa la calificacion de tu primer examen: ");
    scanf("%f", &e1);
    printf("Ingresa la calificacion de tu segundo examen: ");
    scanf("%f", &e2);
    printf("Ingresa la calificacion de tu tercer examen: ");
    scanf("%f", &e3);

    prome=((e1+e2+e3)/3);
    cale=((e1+e2+e3)/3)*(.40);
    calt=((t1+t2+t3)/3)*(.60);

    calgen=cale+calt;

    if (t1 < 1 || t1 > 10 || 
        t2 < 1 || t2 > 10 ||
        t3 < 1 || t3 > 10 ||
        e1 < 1 || e1 > 10 ||
        e2 < 1 || e2 > 10 ||
        e3 < 1 || e3 > 10 ){

        printf("Error: las calificaciones ingresadas son mayores a 10 o menores a 1");

    }else if(calgen>=6 && prome>=6){
        printf("Aprobaste %.2f", calgen);
    }else{
        printf("Reprobaste");
    }

    return 0;

}