#include <stdio.h>

int main() {
    int n, soma = 0;
    for(int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &n);
        soma = soma + n; 
    }
    printf("Resultado da soma e: %d", soma);
}