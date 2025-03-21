#include <stdio.h>

int main(){
    int n, m;
    printf("Ingresa N (renglones): ");
    scanf("%d", &n);
    printf("        M (columnas): ");
    scanf("%d", &m);

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("*");
        }
        printf("\n");
    }

}