#include <stdio.h>
int MAX = 100;

int main(){
    int n, suma, ciclo;
    char nombre[50];
    float calificaciones[MAX];

    do{
        printf("Ingresa el nombre del alumno: ");
        scanf("%49s", nombre);
    
        printf("Cuantas calificaciones ingresaras: ");
        scanf("%d", &n);
    
        printf("Ingresa las %d calificacion del alumno %s!", n, nombre);
        for(int i=0; i<n; i++){
    
            printf("Ingresa la calificacion %d: ", i+1);
            scanf("%f", &calificaciones[i]);
            suma= suma+calificaciones[i];
        }
    
        printf("El promedio del alumno %s es de: %d", nombre, suma/n);

        printf("Quieres ingresa mas informacion? \nIngresa 1-Si 2-No\n ");
        scanf("%d", &ciclo);
    }while(ciclo==1);

    return 0;
}