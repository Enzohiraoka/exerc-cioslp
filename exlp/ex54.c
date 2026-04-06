#include <stdio.h>

int main() {
    int pertri, perquad, perpent, lados;
    printf("O seu poligono tem 3, 4 ou 5 lados? ");
    scanf("%d", &lados);
    if (lados == 3) {
        printf("Voce tem um triangulo\n");
        pertri = lados + lados + lados;
        printf("Seu perimetro e de: %d\n", pertri);
    }
    if (lados == 4) {
        printf("Voce tem um quadrado\n");
        perquad = lados + lados + lados + lados;
        printf("Seu perimetro e de: %d\n", perquad);
    }
    if (lados == 5) {
        printf("Voce tem um pentagono\n");
        perpent = lados + lados + lados + lados + lados;
        printf("Seu perimetro e de: %d\n", perpent);
    }
}