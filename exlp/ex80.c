#include <stdio.h>

int main(){
    int q[20], maior = 0, pos;
    for(int i = 0; i<20; i++){
    do{
        printf("Digite um numero ");
        scanf("%d",&q[i]);
    }while(q[i]<0);
    if(q[i]>maior){
        maior = q[i];
        pos = i + 1;
    }
}
    printf("O maior valor e %d na posicao %d ", maior, pos);
}


/*80) Ler um vetor Q de 20 posições (aceitar somente números positivos). Escrever a seguir o valor do
maior elemento de Q e a respectiva posição que ele ocupa no vetor.*/