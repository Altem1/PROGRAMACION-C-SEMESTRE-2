#include <stdio.h>
#include <math.h>
int Amstrong(int n);

int Amstrong(int n){
    int cont=0, x, suma=0, V_real=n;

    while (n!=0){
        n=n/10;
        cont++;
    }
    return cont;

    while(n!=0){
        x=n%10;
        n=n/10;
        suma=suma+pow(x, cont);
    }

    if (suma==V_real){
        return 1;
    }
    return 0;
}