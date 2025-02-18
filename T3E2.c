/* Dados dos intervalos cerrados [a1,a2] y [b1,b2], escribe un programa que determine si
existe algún número que pertenezca a ambos intervalos. */

#include <stdio.h>

int main(void){

    int a1, a2, b1, b2;

    printf("Introduce los valores del primer intervalo: \n");
    printf("Ingrese el valor del inicio del primer intervalo: ");
    scanf("%d", &a1);
    printf("Ingrese el valor del fin del primer intervalo: ");
    scanf("%d", &a2);

    printf("Introduce los valores del segundo intervalo: \n");
    printf("Ingrese el valor del inicio del primer intervalo: ");
    scanf("%d", &b1);
    printf("Ingrese el valor del fin del primer intervalo: ");
    scanf("%d", &b2);

    if( (b1 > a1 && b1 <= a2) || ( b2 > a1 && b2 <= a2 ) || (a1 > b1 && a1 <= b2) || (a2 > b1 && a2 <=b1 ) ){
        printf("Si existe");
    }else{
        printf("No existe");
    }

    return 0;
}