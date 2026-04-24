#include <stdio.h>

int main(){
    int q[20], maior = 0, pos, menor = 99999, posmenor;
    for(int i = 0; i<20; i++){
    do{
        printf("Digite um numero ");
        scanf("%d",&q[i]);
    }while(q[i]<0);
    
    if(q[i]<menor){
        menor = q[i];
        posmenor = i + 1;

    }
    if(q[i]>maior){
        maior = q[i];
        pos = i + 1;
    }
}
    printf("O maior valor e %d na posicao %d ", maior, pos);
    printf("\nO menor valor e %d na posicao %d ", menor, posmenor);
}


/*81) O mesmo exercício anterior, mas agora deve escrever o menor elemento do vetor e a respectiva
posição dele nesse vetor.*/