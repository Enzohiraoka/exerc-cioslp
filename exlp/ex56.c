#include <stdio.h>

int main() {
    int v1, v2, operacao, resultado;
    printf("Digite o valor 1: ");
    scanf("%d", &v1);
    printf("Digite o valor 2: ");
    scanf("%d", &v2);
    printf("Digite o numero da operacao (1.Adicao, 2.Subtracao, 3.Multiplicacao, 4.Divisao): ");
    scanf("%d", &operacao);
    if (operacao == 1) {
        resultado = v1 + v2;
        printf("O resultado da sua adicao e: %d\n", resultado);
    }
    if (operacao == 2) {
        resultado = v1 - v2;
        printf("O resultado da sua subtracao e: %d\n", resultado);
    }
    if (operacao == 3) {
        resultado = v1 * v2;
        printf("O resultado da sua multiplicacao e: %d\n", resultado);
    }
    if (operacao == 4) {
        if (v2 != 0) {
            resultado = v1 / v2;
            printf("O resultado da sua divisao e: %d\n", resultado);
        } else {
            printf("Erro: nao e possivel dividir por zero.\n");
        }
    }

}