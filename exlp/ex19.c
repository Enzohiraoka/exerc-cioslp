#include <stdio.h>

int main(){
    float comp,alt,larg, arealat, areafront, areatot, azulejos;
    printf("digite o comprimento, a largura e a altura da cozinha ");
    scanf("%f",&comp);
    scanf("%f",&larg);
    scanf("%f",&alt);
    arealat = 2*larg*alt;
    areafront = 2*comp*alt;
    areatot = arealat+areafront;
    azulejos = areatot/1.5;
    printf("Voce precisara de: %f azulejos",azulejos);
}