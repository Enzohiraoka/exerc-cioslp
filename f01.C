#include <stdio.h>

int multiplicar(int a,int b){
    int resultado = 0;

    for( int i= 0; i<b; i++){
        resultado = resultado + a;
    }
    return resultado;
}

int main(){
    int n1, n2, resposta;

    printf("Digite os números da multiplicação: ");
    scanf("%d",&n1);
    scanf("%d",&n2);

    resposta = multiplicar(n1, n2);

    printf("O resultado da multiplicação é: %d", resposta);
}

