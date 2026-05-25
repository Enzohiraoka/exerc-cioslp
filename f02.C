#include<stdio.h>

int divisao(int, int);

int main(){
    int n1, n2, resposta;
    printf("Digite os numeros da divisao");
    scanf("%d",&n1);
    scanf("%d",&n2);

    resposta = divisao(n1,n2);
    printf("Resultado da divisao: %d", resposta);
}

int divisao(int n1, int n2){
    int resultado = 0;
    while( n1>=n2){
        n1 = n1 - n2;
        resultado++;
    }
    return resultado;
}