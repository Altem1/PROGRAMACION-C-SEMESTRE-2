/* Realice un programa que permita determinar el sueldo semanal de un trabajador con base
en las horas trabajadas y el pago por hora, considerando que a partir de la hora número
41 y hasta la 45, cada hora se le paga el doble, de la hora 46 a la 50, el triple, y que
trabajar más de 50 horas no está permitido. */

#include <stdio.h>

int main(void){

    int horast, sueldoh, salario;

    printf("Ingresa las horas trabajadas: ");
    scanf("%d", &horast);
    printf("Ingresa el salario por hora: ");
    scanf("%d", &sueldoh);

    if(horast>50){
        printf("No esta permitido trabajar mas de 50 horas se te pagara unicamente las 50 horas\n");
    }

    if (horast<=40){
        salario=horast*sueldoh;
        
    }else if(horast>40 && horast<=45){
        salario=(40*sueldoh)+((horast-40)*(sueldoh*2));

    }else if (horast>45){
        salario=(40*sueldoh)+(5*(sueldoh*2))+(5*(sueldoh*3));
    }
    
    printf("Tu salario de esta semana es de: %d", salario);
    
    return 0;
}