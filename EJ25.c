#include <stdio.h>
void promedio(int n);
int captura();

int main(){
    int n;
    printf("Ingresa la cantidad de alumnos: ");
    n=captura();
    promedio(n);
}

void promedio(int n){

    float cal=0, calgen=0, promedio;

    for (int i=1; i <= n; i++){
        cal=0;
        printf("Ingresa la calificaciones del alumno %d\n", i);
        for (int j=1; j <= 3; j++){
                
                do{
                    printf("Ingresa la calificacion %d: ", j);
                    cal=captura();
                }while(cal<0 || cal>10);

                cal=cal+cal;
            
        }
        promedio=cal/3;
        printf("\nLa calificacion promedio del alumno %d es: %.2f \n",i, promedio);
        calgen=calgen+promedio;
    }
    printf("\nLa calificacion general del grupo %.2f es: \n", calgen/n);

}

int captura(){
    int n;
    scanf("%d", &n);
    return n;
}