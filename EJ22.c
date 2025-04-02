#include <stdio.h>
int captura_NPersonas();
int captura_edad();
void calcula(int n);
void imprimir(int n, float promedio, int menor, int mayor);

int main(){
    int n;
    n=captura_NPersonas();

    calcula(n);
    return 0;
}

int captura_NPersonas(){
    int n;
    printf("Ingresa el numero de personas: ");
    scanf("%d", &n);
    return n;
}

int captura_edad(){
    int edad, FT=0;
    
    do{

        printf("Ingresa la edad: ");
        scanf("%d", &edad);

        if ( ( edad<0 ) || (edad>122) ){
            FT=0;
            printf("Error: Ingrese una edad valida\n");
        }else{
            FT=1;
        }
        

    }while(FT!=1);

    return edad;
}

void calcula(int n){

    int suma=0, edad, edadmayor=0, edadmenor=1000;
    float promedio;

    for (int i = 1; i <= n; i++){
        edad=captura_edad();
        suma=suma+edad;

        if (edad>edadmayor){
            edadmayor=edad;
        }
        if (edad<edadmenor){
            edadmenor=edad;
        }
    }
    promedio=suma/n;
    imprimir(n ,promedio, edadmenor, edadmayor);
}

void imprimir(int n, float promedio, int menor, int mayor){

    printf("La edad promedio de las %d personas es: %.2f\n", n, promedio);
    printf("La edad mas grande es: %d\nLa edad menor es: %d", mayor, menor);

}