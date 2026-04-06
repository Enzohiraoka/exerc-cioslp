#include <stdio.h>

int main(){
    float salario, reajuste, salreaj, aumento;
    printf("digite seu salario");
    scanf("%f",&salario);
    printf("Digite o percentual do reajuste ");
    scanf("%f",&reajuste);
    aumento = reajuste/100*salario;
    printf("seu aumento foi de: %f ",aumento);
    salreaj = salario+aumento;
    printf("Seu novo salario sera de: %f",salreaj);
}   
