#include <stdio.h>
#include <math.h>
#include <float.h>
#ifndef NAN
#define NAN (0.0 / 0.0)
#endif

// Declaración de las funciones
float captura(char letra);  // Captura de los valores
float resolver_puntos_cri(float a, float b, float c, int signo);  // Resolver los puntos criticos
float calcula(float a, float b, float c, float d, float x, float m, float n); // Calcular maximos y minimos
void imprimir(float p, float q, float s, float r); //Función para imprimir

int main(void) {
    char a = 'a', b = 'b', c = 'c', d = 'd', m = 'm', n = 'n';
    float ax, bx, cx, dx, mx, nx, r, s;
    float p, q;
    
    printf("f(x) = ax^3 + bx^2 + cx + d\n");
    ax = captura(a);
    bx = captura(b);
    cx = captura(c);
    dx = captura(d);
    
    printf("En el intervalo cerrado [m, n]\n");
    mx = captura(m);
    nx = captura(n);
    
    // Puntos criticos (x1 positivo y x2 negativo)
    r = resolver_puntos_cri(ax, bx, cx, 1);
    s = resolver_puntos_cri(ax, bx, cx, -1);

    // Valores maximo y minimo
    //verificamos si es un numero que no existe usamos el booleano ! de negacion para poder realizar el if
    if (!_isnan(r)) {
        p = calcula(ax, bx, cx, dx, r, mx, nx);    
    } else {
        p = calcula(ax, bx, cx, dx, mx, mx, nx);
    }
    if (!_isnan(s)) {
        q = calcula(ax, bx, cx, dx, s, mx, nx);
    } else {
        q = calcula(ax, bx, cx, dx, nx, mx, nx);
    }

    // Imprimir resultados
    imprimir(p, q, s, r);
    return 0;
}

// Funcion que captura los valores
float captura(char letra) {
    float n;
    printf("Ingresa el valor de %c: ", letra);
    scanf("%f", &n);
    return n;
}

// Funcion que resuelve los puntos criticos usando la formula cuadratica
float resolver_puntos_cri(float a, float b, float c, int signo) {
    // Formula general para resolver la ecuación cuadrática f'(x) = 0
    // 3ax^2 + 2bx + c = 0
    float discriminante = (2 * b) * (2 * b) - 4 * (3 * a) * c;
    
    if (discriminante < 0) {
        return NAN; // No hay soluciones reales
    } else {
        // Usamos la formula general: (-b ± sqrt(b^2 - 4ac)) / (2a)
        return (-2 * b + signo * sqrt(discriminante)) / (6 * a);
    }
}

float calcula(float a, float b, float c, float d, float x, float m, float n) {
    // Verificamos si esta en el rango de m a n
    //En caso de que no exista r y s, pasa directamente a evaluar en n y m
    float f;
    if (x <= n && x >= m) {
        f = (a * pow(x, 3)) + (b * pow(x, 2)) + (c * x) + d;
    } else if (x > n) {
        f = (a * pow(n, 3)) + (b * pow(n, 2)) + (c * n) + d;
    } else if (x < m) {
        f = (a * pow(m, 3)) + (b * pow(m, 2)) + (c * m) + d;
    }

    return f;
}

// Solo imprimimos los puntos criticos en x y los maximos y minimos absolutos
void imprimir(float p, float q, float s, float r) {
    //En caso de que r o s no exita imprimira +NAN indicando que no un numero y se pasa a evaluar en los extemos para imprimir p y q
    printf("Los valores criticos de x son: \n    r = %.2f \n    s = %.2f\n", r, s);
    printf("Los valores maximos y mínimos son:\n    p = %.2f\n    q = %.2f\n", p, q);
}
