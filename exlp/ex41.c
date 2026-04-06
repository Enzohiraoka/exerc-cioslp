#include <stdio.h>

int main(){
    float n1,n2;
    printf("Digite um numero ");
    scanf("%f",&n1);
    printf("Digite um numero ");
    scanf("%f",&n2);
    if(n1==n2){
        printf("Os numeros sao iguais ");
    }

    else if(n1>n2){
        printf("O primeiro numero e maior ");
    }
    else{
        printf("O segundo numero e maior");
    }
}










