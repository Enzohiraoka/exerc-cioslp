#include <stdio.h>

int main(){
    int v1,v2,soma = 0;
    printf("Digite o valor 1 ");
    scanf("%d",&v1);
    printf("Digite o valor 2 ");
    scanf("%d",&v2);
    if(v2>v1){
    for (int i = v1; i <= v2; i++){
        soma = soma + i;
    }
}
    else{
        for (int i = v2; i <= v1; i++){
        soma = soma + i;
        }
    }
    printf("A soma dos numeros entre v1 e v2 e:%d ",soma);
}

