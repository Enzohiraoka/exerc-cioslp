#include <stdio.h>

int main() {
    int soma = 0; 
    for(int i = 10; i >= 0; i--) {
        printf("%d ", i);
        soma = soma + i;
    }
    printf("Soma total: %d", soma);
}
    