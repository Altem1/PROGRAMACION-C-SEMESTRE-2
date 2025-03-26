#include<stdio.h>
char c_tipo();
float captura();
float conversor(int g, int t);
void imprimir(float g, int t);

int main(){

    char tipo;
    float  g, conver;

    g=captura();
    tipo=c_tipo();
    conver=conversor(g, tipo);
    imprimir(conver,tipo);
}

char c_tipo(){
    char t;
    printf("Ingresa el tipo a convertir \n C - Para Celcius\n F - Para Firenheit\n");
    scanf(" %c", &t);
    return t;
}

float captura(){
    int n;
    printf("Ingresa los grados: ");
    scanf("%d", &n);
    return n;
}

float conversor(int g, int t){
    float convertido;
    if( (t=='F') || (t=='f') ){
        convertido=(g*1.8)+32;
    }else if( (t=='C') || (t=='c') ){
        convertido=(g-32)*(5.0/9.0);
    }

    return convertido;
}

void imprimir(float g, int t){

    printf("%.2f %c%c", g, 248, t);

}