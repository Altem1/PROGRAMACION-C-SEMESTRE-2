#include<stdio.h>

int main(){
    int n;
    printf("Ingresa N: ");
    scanf("%d", &n);

    for(int i=0; i<2; i++){

        for (int j = 0; j < n; j++){
            if(i==0){
                if(j%2==0){
                    printf("-");
                }else{
                    printf("#");
                }   
            }else{
                if(j%2==0){
                    printf("#");
                }else{
                    printf("-");
                }   
            }
        }
        printf("\n");
    }

}