#include <stdio.h>
#include <math.h>
float captura_radio();
float captura_altura();
float area_base(float radio);
float area_cara(float radio, float altura);
float volumen(float a_b, float altura);
void imprimir(float area_c, float volumen);

int main(){

    float radio, altura, area_b, area_c, vol;
    radio=captura_radio();
    altura=captura_altura();
    area_b=area_base(radio);
    area_c=area_cara(radio, altura);
    vol=volumen(area_b, altura);
    imprimir(area_c, vol);

    return 0;
}

float captura_radio(){
    float radio;

    printf("Ingresa el valor de el radio: ");
    scanf("%f", &radio);
    return radio;

}

float captura_altura(){
    float altura;

    printf("Ingresa el valor de la altura: ");
    scanf("%f", &altura);
    return altura;

}
//pi*r^2
float area_base(float radio){
    return (3.14159265359*pow(radio,2));
}
//2pirh
float area_cara(float radio, float altura){
    return (2*3.14159265359*radio*altura);
}

float volumen(float a_b, float altura){
    return (a_b*altura);
}

void imprimir(float area_c, float volumen){
    printf("El area de la cara es: %.2f\nEl volumen es: %.2f", area_c, volumen);
}