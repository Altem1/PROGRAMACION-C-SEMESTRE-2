#include <stdio.h>

int main(){

    int a1, b1, c1, a2, b2, c2, D, Dx, Dy, x, y;
    printf("Considera \n a1x + b1y = c1 \n a2x + b2y = c2 \n");

    printf("Para el primer polinomio: \n");
    printf("Ingresa el valor de a: ");
    scanf("%d", &a1);
    printf("Ingresa el valor de b: ");
    scanf("%d", &b1);
    printf("Ingresa el valor de c: ");
    scanf("%d", &c1);

    printf("Para el segundo polinomio: \n");
    printf("Ingresa el valor de a: ");
    scanf("%d", &a2);
    printf("Ingresa el valor de b: ");
    scanf("%d", &b2);
    printf("Ingresa el valor de c: ");
    scanf("%d", &c2);

    D=(a1*b2)-(a2*b1);
    Dx=(c1*a2)-(c2*a1);
    Dy=(c1*b2)-(c2*b1);
    x=Dx/D;
    y=Dy/D;
    
    printf("El valor de x: %d \n", x);
    printf("El valor de y: %d \n", y);

    return 0;
}