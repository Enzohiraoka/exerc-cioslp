/*Escreva uma função que receba um número inteiro e retorne seu fatorial.*/

#include<stdio.h>

int fatorial(int);

int main(){
    int n, resposta;
    printf("Digite um numero ");
    scanf("%d",&n);
    resposta = fatorial(n);
    printf("O seu fatorial e: %d", resposta);
}

int fatorial(int n){
    int resultado = 1;
    for(int i = n; i > 1; i--){ 
        resultado = resultado * i; 
    }
    return resultado;
}
