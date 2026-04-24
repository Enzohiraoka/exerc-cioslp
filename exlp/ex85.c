#include <stdio.h>

int main(){
    int t[30], cont = 0, maior, menor;
    float media, soma = 0;
   
    for(int i = 0; i<30;i++){
        printf("t:");
        scanf("%d",&t[i]);
        soma = soma + t[i];
    }
    menor = t[0];
    maior = t[0];
    media = soma/30;
    for(int i = 0; i<30; i++){
        if(t[i]<media){
            cont++;
        }
    }
    for(int i = 0; i<30; i++){
        if(t[i] > maior){
            maior = t[i];
        }
        if(t[i] < menor){
            menor = t[i];
        }
    }
    printf("\nA media de temperatura foi de %f",media);
    printf("\n%d dias foram abaixo da media",cont);
    printf("\nA menor temperatura registrada foi: %d ",menor);
    printf("\nA maior temperatura registrada foi: %d ",maior);





}

/*85) Faça um algoritmo para ler e armazenar em um vetor a temperatura média de todos os dias do ano.
Calcular e escrever:
a) Menor temperatura do ano
b) Maior temperatura do ano
c) Temperatura média anual
d) O número de dias no ano em que a temperatura foi inferior a média anual*/


