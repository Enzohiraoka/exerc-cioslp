#include <stdio.h>

int main(){
    int v1[15], v2[15], cont = 0;
    for(int i=0; i<15; i++){
        printf("N: ");
        scanf("%d",&v1[i]);
        printf("N: ");
        scanf("%d",&v2[i]);
    }
     for(int i=0; i<15; i++){
        if(v1[i]==v2[i]){
            printf("\nValor encontrado na posicao %d ",i);
            cont++;
        }
     }
     printf("\nValor encontrados simultaneamente %d vezes",cont);
}

