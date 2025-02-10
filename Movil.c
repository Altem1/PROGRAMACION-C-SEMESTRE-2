#include <stdio.h>

int main(){

    int v, h, min, seg, tg;
    float dis, metros;

    printf("Indica la velocidad en metros/segundos: ");
    scanf("%d", &v);
    printf("Indica la distancia en km: ");
    scanf("%f",&dis);

    metros=dis*1000;

    tg=(metros/v);
    h=(tg/3600);
    min=(tg%3600/60);
    seg=(tg%3600%60);

    printf("El tiempo es de: %d:%d:%d", h, min, seg);

    return 0;
}