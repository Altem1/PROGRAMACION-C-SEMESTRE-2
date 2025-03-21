#include <stdio.h>

int main(){

    int n;
    float porcentaje, salario, sporc;

    printf("Ingresa la cantidad de a%cos que desees ver el aumento: ", 164);
    scanf("%d", &n);
    printf("Ingresa el aumento porcentual por a%co: ", 164);
    scanf("%f", &porcentaje);
    printf("Ingresa tu salario mensual actual: ");
    scanf("%f", &salario);

    for (int i = 1; i <= n; i++){
        
        sporc=salario*(porcentaje/100);
        salario=salario+sporc;
        printf("Tu salario mensual en el a%co %d es de: $ %.2f \n", 164, i, salario);

    }
    
    return 0;
}