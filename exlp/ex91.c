/*91) Faça um algoritmo para ler 50 números e armazenar em um vetor VET, verificar e escrever se
existem números repetidos no vetor VET e em que posições se encontram.0*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int v[50], busca, cont = 0;
    srand(time(NULL));

    for(int i=0; i<50; i++){
        v[i] = rand()%100;
        printf("%d, ",v[i]);
    }
    printf("Busca: ");
    scanf("%d",&busca);
    for(int i=0; i<50; i++){
        if(v[i]==busca){
            printf("\nEncontrado posicao %d ",i+1);
            cont++;

        }
    }
    printf("\nnumero encontrado %d vezes",cont);

}
