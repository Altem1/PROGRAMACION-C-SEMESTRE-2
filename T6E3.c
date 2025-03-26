#include<stdio.h>
int captura();
int calcula(int n);
void imprimir(int pasos);

int main(void){
    int n, pasos;
    n=captura();
    pasos=calcula(n);
    imprimir(pasos);

}

int captura(){
    int n;
    printf("Ingresa el valor de N: ");
    scanf("%d", &n);
    return n;
}

int calcula(int n){

    int cont=1;

    do{

        if(n%2==0){
            n=n/2;
            cont++;
        }else{
            n=(n*3)+1;
            cont++;
        }

    }while(n!=1);

    return cont;
}

void imprimir(int pasos){
    printf("%d", pasos);
}