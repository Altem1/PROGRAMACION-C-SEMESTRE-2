#include <stdio.h>
int captura();
int esFibonacci(int n);
void todos_fibo(int n);

int main(){
    int n, esfibo;
    n=captura();
    todos_fibo(n);

    return 0;
}

void todos_fibo(int n){
    int tf;

    for (int i = 2; i < n; i++){
        tf=esFibonacci(i);
        if (tf==0){
            printf("%d ", i);
        }   
    }
}

int esFibonacci(int n){

    int a=0, b=1, c;

    if(n==0 || n==1){
        return 1;
    }
    c=a+b;
    while(c <= n){

        if(n==c){
            return 1;
        }

        a=b;
        b=c;
        c=a+b;

    }
    return 0;
}

int captura(){
    int n;
    printf("Ingresa el valor de n: ");
    scanf("%d", &n);
    return n;
}