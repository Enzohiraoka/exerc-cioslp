#include <stdio.h>

int main(){
    float tempo, salario, sal_hor;
    printf("Digite seu salario por hora ");
    scanf("%f",&sal_hor);
    printf("Digite quantas horas voce trabalhou ");
    scanf("%f",&tempo);
    salario = sal_hor*tempo;
    printf("Seu salario sera de: %f",salario);
}