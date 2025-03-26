#include<stdio.h>

int captura();
int calcula(int n);
int es_primo(int i);
void imprimir(int suma);

int main(){

    int n, suma;

    n=captura();
    suma=calcula(n);
    imprimir(suma);
}

int captura(){
    int n;

    printf("Ingresa el valor de n: ");
    scanf("%d", &n);

    return n;
}

int es_primo(int i){

    for(int j=2; j*j<=i; j++){

        if (i%j==0){
            return 0;
        }
    }
    return 1;
}

int calcula(int n){
    //generar los numeros primos
    int suma=0;

    for(int i=2; i<=n; i++){

        if(es_primo(i)){

            suma += i;

        }

    }

    return suma;

}

void imprimir(int suma){

    printf("%d", suma);

}