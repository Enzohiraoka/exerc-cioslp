#include <stdio.h>

int main() {
    int lados;
    printf("O seu poligono tem quantos lados? ");
    scanf("%d", &lados);
    if (lados == 3) {
        printf("Voce tem um triangulo\n");
    }
    if (lados == 4) {
        printf("Voce tem um quadrado\n");
    }
    if (lados == 5) {
        printf("Voce tem um pentagono\n");
    }
    if (lados < 3) {
        printf("Nao e um poligono\n");
    }
    if (lados > 5) {
        printf("Poligono nao identificado\n");
    }
}