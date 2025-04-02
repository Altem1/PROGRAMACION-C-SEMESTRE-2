#include <stdio.h>
int captura();
void tablero(int n);

int main(){
    int n;
    n=captura();
    tablero(n);
}

void tablero(int n){

    for(int i = 1; i <= n; i++){

        for (int j = 1; j <= n; j++){
        
            if (i%2!=0){

                if(j%2!=0){
                    printf("1 ");
                }else{
                    printf("0 ");
                }
            }else if(i%2==0){
                if (j%2!=0){
                    printf("0 ");
                }else{
                    printf("1 ");
                }
            }
        }
        printf("\n");
    }

}

int captura(){
    int n;
    printf("Ingresa el valor de N: ");
    scanf("%d", &n);
    return n;
}