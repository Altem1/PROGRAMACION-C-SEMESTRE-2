#include <stdio.h>

int main(void){

    int tipo_tar;
    float credito, aumento, nuevo_lim;

    printf("Ingresa tu tipo de tarjeta \n1- Tipo 1\n2- Tipo 2\n3- Tipo 3\n4- Tipo 4 en adelante\n Opcion: ");
    scanf("%d", &tipo_tar);

    printf("Ingresa la cantidad de tu credito actual: ");
    scanf("%f", &credito);

    switch (tipo_tar){
        
        case 1:
            aumento=.25;
            break;
    
        case 2:
            aumento=.35;ws
            break;

        case 3:
            aumento=.40;
            break;

        default:
            aumento=.50;
            break;
    }

    nuevo_lim=credito+(credito*aumento);

    printf("Tu nuevo limite es: %.2f", nuevo_lim);

}