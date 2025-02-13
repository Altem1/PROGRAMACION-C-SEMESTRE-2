#include <stdio.h>

int main(){

    float descuento, preciof, descuenton;
    int precio;

    printf("Ingresa el precio de tu traje: ");
    scanf("%d", &precio);

    if (precio >= 2500){
        descuento=precio*.15;
        descuenton=precio-descuento;
    }else{
        descuento=precio*.8;
        descuenton=precio-descuento;
    }

    preciof=precio-descuenton;

    printf("El descuento realizado fue de: %.2f \n", descuenton);
    printf("El precio ya con el descuento es de: %.2f", preciof);
    
    return 0;

}