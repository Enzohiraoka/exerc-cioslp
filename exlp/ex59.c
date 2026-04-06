#include <stdio.h>

int main() {
    int a1, a2, a3;
    printf("Digite os valores dos angulos do seu triangulo: ");
    scanf("%d %d %d", &a1, &a2, &a3);
    if (a1 < 90 && a2 < 90 && a3 < 90) {
        printf("Triangulo Acutangulo\n");
    }
    if (a1 > 90 || a2 > 90 || a3 > 90) {
        printf("Triangulo Obtusangulo\n");
    }
    if (a1 == 90 || a2 == 90 || a3 == 90) {
        printf("Triangulo Reto\n");
    }
}