#include <stdio.h>

int main(){
    float lado, area, dobro_da_area;
    printf("Digite o lado do quadrado");
    scanf("%f",&lado);
    area = lado*lado;
    printf("Sua area e de: %f",area);
    dobro_da_area = area*2;
    printf("O dobro da area e: %f",dobro_da_area);

}