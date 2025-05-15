#include <stdio.h>
#include <math.h>;

int binario(int bin[]);


int binario(int bin[]){

    int sum=0;

    for (int i = 0; i < N; i++){
        
        sum = sum + ( pow (2, i) * bin[i]);

    }
    

}