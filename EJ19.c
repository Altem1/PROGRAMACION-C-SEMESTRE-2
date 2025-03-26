#include <stdio.h>
int captura();
int calcula(int a, int b, int c);
void imprime(int m);

int main(void){

    int a, b, c, m;
    a=captura();
    b=captura();
    c=captura();

    m=calcula(a, b, c);

    imprime(m);

}

int captura(){
    int n;
    printf("Ingresa un numero: ");
    scanf("%d", &n);
    return n;
}

int calcula(int a, int b, int c){

    int m;

    if( (a > b) && (a > c ) ){
        m=a;
    }else if( (b > a) && (b > c) ){
        m=b;
    }else if( (c > a) && (c > b) ){
        m=c;
    }

    return m;

}

void imprime(int m){

    printf("El valor mas grande es: %d", m);

}