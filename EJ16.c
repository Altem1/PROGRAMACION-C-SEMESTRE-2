#include <stdio.h>

int main(void){

    int dia, mes, anio, band=0;

    do{
        
        printf("Dia: ");
        scanf("%d", &dia);
        printf("Mes: ");
        scanf("%d", &mes);
        printf("A%co: ", 164);
        scanf("%d", &anio);

        if( (anio>0 && anio<=2025) && (mes<=12 && mes>=1) ){
            band=1;
        }else{
            band=0;
        }

        if( ((mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12) && (dia<=31 && dia>0 )) || ( (mes==4 || mes==6 || mes==9 || mes==11) && (dia<=30 && dia>0) ) ){
            band=1;
        }else{
            band=0;
        }

        if( ((anio%4==0 && mes==2) && (dia<=29 && dia>0)) || ((anio%4!=0 && mes==2) && (dia<=28 && dia>0)) ){
            band=1;
        }else{
            band=0;
        }
        
        printf("\n");

    } while ( band == 0 );
    
    printf("La fecha es valida\n%d/%d/%d", dia, mes, anio);

    return 0;
}