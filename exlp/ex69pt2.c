#include <stdio.h>

int main() {
    int prod, produtostotais = 0;
    float vlprod, soma = 0, vltcadaum, media;
    char resposta; 
    do {
        printf("Quantos produtos desse mesmo tipo voce tem? ");
        scanf("%d", &prod);
        printf("Qual o valor unitario do produto? ");
        scanf("%f", &vlprod);
        produtostotais = produtostotais + prod;
        vltcadaum = prod * vlprod;
        soma = soma + vltcadaum;
        printf("MAIS MERCADORIAS (S/N)? ");
        scanf(" %c", &resposta); 

    } while (resposta == 'S' || resposta == 's');

    if (produtostotais > 0) {
        media = soma / produtostotais;
        printf("\nValor total em estoque: R$ %.2f", soma);
        printf("\nMedia de valor das mercadorias: R$ %.2f\n", media);
    }

}