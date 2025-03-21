#include<stdio.h>

int main(void){

    int alumnos, alumnos_a=0;
    float cal, promedio_g, cal_a=0, cal_b=10, cal_gen=0;

    printf("Ingresa la cantidad de alumnos: ");
    scanf("%d", &alumnos);

    for (int i = 1; i <= alumnos; i++){
        
        printf("Ingresa la calificacion del alumno %d: ", i);
        scanf("%f", &cal);

        if(cal<=10 && cal>=0){

            //cal mas alta
            if(cal > cal_a){
                cal_a=cal;
            }
            //cal mas baja
            if(cal < cal_b){
                cal_b=cal;
            }
            //aprobados
            if (cal>5.9){
                alumnos_a++;
            }

            cal_gen=cal_gen+cal;
        }else{
            printf("La calificacion debe estar entre 10 y 0, ingresa de nuevo la calificacion del alumno %d \n", i);
            i--;
        }

    }

    printf("Promedio del grupo: %.2f \n", cal_gen/alumnos);
    printf("Alumnos que aprobaron: %d \n", alumnos_a);
    printf("La calificacion mas alta fue de: %.2f \n", cal_a);
    printf("La calificacion mas baja fue de: %.2f \n", cal_b);
    

}