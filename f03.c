#include<stdio.h>
/*Escreva uma função que calcule a potência de um número inteiro x
y usando multiplicações.*/

int potencia(int,int);

int main(){
    int n1, n2, resposta;
    printf("Digite a base: ");
    scanf("%d",&n1);
    printf("Digite o expoente: ");
    scanf("%d", &n2);
    resposta = potencia(n1,n2);
    printf("Resposta: %d",resposta);

}

int potencia(int n1, int n2){
    int resultado = 1;
    for(int i=0; i<n2;i++){
        resultado = resultado * n1;
    }
    return resultado;   
}
