/* La Dirección de tránsito municipal requiere un programa que mida el índice alcohólico
dado el tipo de vehículo que se conduce y la tasa máxima de alcohol que se muestra a
continuación. */

#include <stdio.h>

int main(void){

    int tipo_vehiculo;
    float tasa_alco;

    printf("Ingresa que tipo de vehiculo es: \n1- Camion\n2- Transporte Publico\n3- Carro\n4- Moto\n Opcion: ");
    scanf("%d", &tipo_vehiculo);
    printf("Ingresa el valor que marco el alcoholimetro: ");
    scanf("%f", &tasa_alco);

    //Primero para los menores a tasa media

    switch (tipo_vehiculo){

        case 1:
        
            printf("Seleccionaste camion: \n");

            if (tasa_alco < 0.4){
                printf("El alcoholimetro marca debajo de la media.\n");
                printf("Accion: Continuar.\n");
            }else if(tasa_alco >= 0.4 && tasa_alco < 0.7){
                printf("El alcoholimetro marca en la media o encima de la media.\n");
                printf("Accion: Infraccion.\n");
            }else if(tasa_alco >= 0.7){
                printf("El alcoholimetro marca en la tasa maxima.\n");
                printf("Accion: Prision por estado de ebriedad.\n");
            }

            break;

        case 2:

            printf("Seleccionaste Transporte publico.\n");

            if (tasa_alco < 0.3){
                printf("El alcoholimetro marca debajo de la media.\n");
                printf("Accion: Continuar.\n");
            }else if(tasa_alco >= 0.3 && tasa_alco < 0.5){
                printf("El alcoholimetro marca en la media o encima de la media.\n");
                printf("Accion: Infraccion.\n");
            }else if(tasa_alco >= 0.5){
                printf("El alcoholimetro marca en la tasa maxima.\n");
                printf("Accion: Prision por estado de ebriedad.\n");
            }

            break;

        case 3:

            printf("Seleccionaste Carro.\n");

            if (tasa_alco < 0.5){
                printf("El alcoholimetro marca debajo de la media.\n");
                printf("Accion: Continuar.\n");
            }else if(tasa_alco >= 0.5 && tasa_alco < 0.8){
                printf("El alcoholimetro marca en la media o encima de la media.\n");
                printf("Accion: Infraccion.\n");
            }else if(tasa_alco >= 0.8){
                printf("El alcoholimetro marca en la tasa maxima.\n");
                printf("Accion: Prision por estado de ebriedad.\n");
            }
            
            break;

        case 4:

            printf("Seleccionaste Moto.\n");

            if (tasa_alco < 0.6){
                printf("El alcoholimetro marca debajo de la media.\n");
                printf("Accion: Continuar.\n");
            }else if(tasa_alco >= 0.6 && tasa_alco < 0.8){
                printf("El alcoholimetro marca en la media o encima de la media.\n");
                printf("Accion: Infraccion.\n");
            }else if(tasa_alco >= 0.8){
                printf("El alcoholimetro marca en la tasa maxima.\n");
                printf("Accion: Prision por estado de ebriedad.\n");
            }

            break;
    
        default:

        printf("Esa no es una opcion valida intenta de nuevo");
            break;
    }

    return 0;

}