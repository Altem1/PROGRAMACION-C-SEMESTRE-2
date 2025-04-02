#include <stdio.h>
int captura(char c);
int factorial(int n);
int combinacion(int n, int r);
void imprimir(int combinacion);

int main(){
    char nx='n', rx='r';
    int n, r, comb;
    n=captura(nx);
    r=captura(rx);
    comb=combinacion(n, r);
    imprimir(comb);
}

int combinacion(int n, int r){
    int combinacion, nr;
    nr=n-r;
    combinacion=( ( factorial(n) ) / ( factorial(r)*factorial(nr) ) );
    return combinacion;
}

int factorial(int n){

    int factorial=1;

    for (int i = 1; i <= n; i++){
        factorial=factorial*i;
    }
    
    return factorial;
}

int captura(char c){
    int n;
    printf("Ingresa %c: ", c);
    scanf("%d", &n);
    return n;
}

void imprimir(int combinacion){
    printf("La combinaciones son: %d", combinacion);
}