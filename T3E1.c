/* Dadas las longitudes de cuatro palitos de madera A, B, C y D, escribe un programa que
decida si es posible elegir tres de ellos para formar un triángulo equilátero */

#include <stdio.h>

int main() {
    int a, b, c, d;

    printf("Introduce los valores de los palitos de madera:\n");
    printf("Palito A: ");
    scanf("%d", &a);
    printf("Palito B: ");
    scanf("%d", &b);
    printf("Palito C: ");
    scanf("%d", &c);
    printf("Palito D: ");
    scanf("%d", &d);

    if ((a == b && b == c) || (a == b && b == d) || (a == c && c == d) || (b == c && c == d)) {
        printf("Es posible formar un triangulo equilatero\n");
    } else {
        printf("No es posible formar un triangulo equilatero\n");
    }

    return 0;
}