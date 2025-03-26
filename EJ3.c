#include <stdio.h>

int main(){

    int horas, horasn, sueldo_hora, sueldoF;

    printf("Ingresa las horas trabajadas: ");
    scanf("%d",&horas);

    printf("Ingresa tu salario por hora: ");
    scanf("%d",&sueldo_hora);

    if (horas>40){
        horasn=horas-40;

        sueldoF=((sueldo_hora*2)*(horasn))+((horas-horasn)*sueldo_hora);
    }else{
        sueldoF=sueldo_hora*horas;
    }

    printf("Tu sario sera de: %d", sueldoF);
    

}