#include <stdio.h>

int main(){
    int  prod, tipos, produtostotais = 0;
    float media, vlprod, soma = 0, vltcadaum; 
    printf("Quantos tipos de produtos voce tem? ");
    scanf("%d",&tipos);
    for(int i = 0; i<tipos; i++){
        printf("Quantos produtos desse mesmo tipo voce tem? ");
        scanf("%d",&prod);
        printf("valor do produto ");
        scanf("%f",&vlprod);
        produtostotais = produtostotais + prod;
        vltcadaum = prod*vlprod;
        soma = vltcadaum + soma;
    }
    media = soma/produtostotais;
    printf("A media total dos produtos vale: %f ",media);

}


