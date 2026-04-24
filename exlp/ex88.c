#include <stdio.h>

int main() {
    int v1[20], v2[20], busca;
    int j = 0; 
    for (int i = 0; i < 20; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &v1[i]);
    }
    printf("\nDigite o numero a ser buscado e removido: ");
    scanf("%d", &busca);
    for (int i = 0; i < 20; i++) {
        if (v1[i] != busca) {
            v2[j] = v1[i];
        }
    }
    if (j == 20) {
        printf("\nO numero %d nao existe no vetor original.\n", busca);
    } else {
        printf("\nO numero foi removido. Novo vetor:\n");
        for (int i = 0; i < j; i++) {
            printf("%d ", v2[i]);
        }
        printf("\n");
    }
}