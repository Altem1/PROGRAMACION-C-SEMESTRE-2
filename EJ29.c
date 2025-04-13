#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

float PI = 3.141516;
char menu();
void Area_Perimetro_Circulo(float *area, float *perimetro);
void Area_Perimetro_Rectangulo(float *area, float *perimetro);
void Area_Perimetro_Triangulo(float *area, float *perimetro);
void Area_Perimetro_Trapecio(float *area, float *perimetro);
void Imprimir(float area, float perimetro);

int main(){
    int op;
    char letra;
    float area, perimetro;

    do{

        letra=menu();

        switch (letra){

            case 'A':
                Area_Perimetro_Circulo(&area, &perimetro);
                Imprimir(area, perimetro);
                break;

            case 'B':
                Area_Perimetro_Rectangulo(&area, &perimetro);
                Imprimir(area, perimetro);
                break;

            case 'C':
                Area_Perimetro_Triangulo(&area, &perimetro);
                Imprimir(area, perimetro);
                break;

            case 'D':
                Area_Perimetro_Trapecio(&area, &perimetro);
                Imprimir(area, perimetro);
                break;

            case 'E':
                printf("\nEntendido saldremos del programa...\n");
                break;  
        
            default:
                printf("\nEsa es una opcion no valida\n");
                break;
        }

        if (letra=='E'){
            break;
        }
        
        printf("\n\nQuieres hacer otra operacion?\n1 .- Si\n2 .- No\n:::");
        scanf("%d", &op);
        if (op==1){
            getchar();
            printf("\033[2J\033[H");
        }else if( op!=1 || letra=='E' ){
            printf("\nEntendido saldremos del programa...\n");
            break;
        }


    }while( (op!=2) || (letra!='E') );

}

char menu(){
    char letra;
    printf("Selecciona una opcion, ingresando solo la letra de la opcion: \n");
    printf("A .- Area y perimetro del circulo\nB .- Area y perimetro del rectangulo\nC .- Area y perimetro del triangulo\nD .- Area y perimetro del trapecio\nE .- Salir\n");
    scanf(" %c", &letra);
    return letra;
}

void Area_Perimetro_Circulo(float *area, float *perimetro){

    float radio;

    printf("Ingresa el radio del circulo: ");
    scanf("%f", &radio);
    *area=pow(radio, 2.0)*(PI);
    *perimetro=2*PI*radio;
    
}

void Area_Perimetro_Rectangulo(float *area, float *perimetro){

    float base, altura;

    printf("Ingresa el tamaño de la altura: ");
    scanf("%f", &altura);
    printf("Ingresa el tamaño de la base: ");
    scanf("%f", &base);

    *area=base*altura;
    *perimetro=(2*base)+(2*altura);

}

void Area_Perimetro_Triangulo(float *area, float *perimetro){

    float lado1, lado2, lado3, s;

    printf("Ingresa el lado 1: ");
    scanf("%f", &lado1);
    printf("Ingresa el lado 2: ");
    scanf("%f", &lado2);
    printf("Ingresa el lado 3: ");
    scanf("%f", &lado3);
    *perimetro=lado1+lado2+lado3;
    s=*perimetro/2;
    *area=sqrt((s*(s-lado1)*(s-lado2)*(s-lado3)));

}

void Area_Perimetro_Trapecio(float *area, float *perimetro){

    float base1, base2, h, l;

    printf("Ingresa el valor de la base 1: ");
    scanf("%f", &base1);
    printf("Ingresa el valor de la base 2: ");
    scanf("%f", &base2);
    printf("Ingresa el valor de la altura: ");
    scanf("%f", &h);
    printf("Ingresa el valor de el lado: ");
    scanf("%f", &l);
    *area=((base1+base2)*h)/2;
    *perimetro=base1+base2+2*l;

}

void Imprimir(float area, float perimetro){
    printf("El Area es: %.2f\nEl perimetro es: %.2f", area, perimetro);
}