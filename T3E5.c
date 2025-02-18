/* El banco “Bandido de peluche” desea calcular para uno de sus clientes el saldo actual, el pago mínimo y el pago para no generar intereses. 
Los datos que se conocen son: saldo anterior del cliente, monto de las compras que realizó y el pago que depositó en el corte anterior. 
Para calcular el pago mínimo se debe considerar 15% del saldo, y para no generar intereses corresponde al 85% del saldo. 
Considere que el saldo actual debe incluir 12% de los intereses causados por no realizar el pago mínimo y $200.00 por multa por el mismo motivo */

#include <stdio.h>

int main(void){

    float saldo_anterior, monto_compras, pago_anterior, saldo_actual, multa12, pago_min, pago_lib;

    printf("Ingrese su saldo anterior: ");
    scanf("%f", &saldo_anterior);
    printf("Ingrese la cantidad del pago que realizo el corte anterior: ");
    scanf("%f", &pago_anterior);
    printf("Ingrese el monto de las compras realizadas: ");
    scanf("%f", &monto_compras);

    //Primero verificar que tipo de pago realizo la ocasion anterior
    if (pago_anterior >= saldo_anterior*.15 && pago_anterior < saldo_anterior*.85 ) {
        printf("No tienes multa ni interes por realizar el pago minimo \n");
        saldo_actual=(saldo_anterior-pago_anterior)+monto_compras;
        printf("Tu saldo actual es de: %.2f \n", saldo_actual);

    }else if(pago_anterior >= saldo_anterior*.85 && pago_anterior < saldo_anterior){
        printf("Excelente tu pago anterior cubrio el pago libre de intereses \n");
        saldo_actual=(saldo_anterior-pago_anterior)+monto_compras;
        printf("Tu saldo actual es de: %.2f \n", saldo_actual);

    }else if(pago_anterior < saldo_anterior*.15){
        printf("Tu pago anterior no cumplio con el pago minimo, se te agregara un interes del 12 porciento mas una multa de $200 \n");
        saldo_anterior=saldo_anterior-pago_anterior;
        printf("Tu saldo anterior restante antes de penalizacion fue de: %.2f \n", saldo_anterior);
        multa12=(saldo_anterior*.12);
        printf("La multa del 12 porciento sera de: %.2f \n", multa12);
        saldo_actual=saldo_anterior+multa12+200+monto_compras;
        printf("Tu saldo actual es la suma de tu saldo anterior %.2f + la multa del 12 porciento %.2f + 200 de penalizacion + monto de tus compras este mes %.2f \n", saldo_anterior, multa12, monto_compras);
        printf("Tu saldo actual es de: %.2f \n", saldo_actual);
    }else if(pago_anterior>saldo_anterior){
        printf("Error: no puedes hacer un pago mayor a tu saldo anterior verifica de nuevo \n");
    }
    
    pago_min=saldo_actual*.15;
    printf("Tu pago minimo es de: %.2f \n", pago_min);

    pago_lib=saldo_actual*.85;
    printf("Tu pago libre de intereses es de: %.2f \n", pago_lib);

    return 0;
}