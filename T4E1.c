#include <stdio.h>

int main(){

    int cont=0;
    char letra;

    while(cont<5){
        
        printf("Ingresa una letra: ");
        scanf(" %c", &letra);

        if (letra=='a' || letra=='A' || letra=='e' || letra=='E' || letra=='i' || letra=='I' || letra=='o' || letra=='O' || letra=='u' || letra=='U'){
            cont++;   
        }
    }
    
    printf("%d", cont);

}