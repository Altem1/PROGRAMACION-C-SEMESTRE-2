#include <stdio.h>
int captura();
int producto(int n1, int n2);
void imprimir(int r, int a, int b);

int main(){

    int a, b, r;

    a=captura();
    b=captura();
        
    r=producto(a, b);
    imprimir(r,a,b);
    
    return 0;
}

int captura(){

    int n;
    printf("Ingresa un numero: ");
    scanf("%d", &n);

    return n;

}

int producto(int n1, int n2){

    int suma=0;

    for(int i=0; i<n2; i++){
        suma=suma+n1;
    }

    return suma;

}

void imprimir(int r, int a, int b){

    printf("%d x %d = %d", a, b, r);

}