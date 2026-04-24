/*90) Faça um algoritmo para ler um vetor de 30 números. Após isto, ler mais um número qualquer,
calcular e escrever quantas vezes esse número aparece no vetor.*/

#include <stdio.h>

int main(){
    int v[30], busca, cont = 0;
    for(int i=0; i<30; i++){
        printf("n: ");
        scanf("%d",&v[i]);
    }
    printf("Busca: ");
    scanf("%d",&busca);
    for(int i=0; i<30; i++){
        if(v[i]==busca){
            printf("\nEncontrado posicao %d ",i+1);
            cont++;

        }
    }
    printf("\nnumero encontrado %d vezes",cont);

}