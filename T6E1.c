#include <stdio.h>

int captura();
int calcular(int x1, int x2);
void imprimir(int suma);

int main(){

    int a, b, suma;
    a=captura();
    b=captura();
    //suponiendo que el intervalo es abierto
    suma=calcular(a, b);

    imprimir(suma);

    return 0;
}

int captura(){
    int n;
    printf("Ingresa el valor del intervalo: ");
    scanf("%d", &n);

    return n;

}

int calcular(int x1, int x2){

    int suma=0;
    //En el intervalo abierto que va desde x1 a x2
    for(int i=x1; i<=x2; i++){

        if(i%2!=0){
            suma=suma+i;
        }

    }

    return suma;

}

void imprimir(int suma){

    printf("%d", suma);

}