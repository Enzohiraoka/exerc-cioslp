#include <stdio.h>

int main() {
    float potl, larg, comp, area, pt;
    int totalLampadas;
    printf("Digite a potencia da lampada que sera utilizada (em watts): ");
    scanf("%f", &potl);
    printf("Digite a largura do comodo: ");
    scanf("%f", &larg);
    printf("Digite o comprimento do comodo: ");
    scanf("%f", &comp);
    area = larg * comp;
    pt = area * 18;
    totalLampadas = pt / potl;
    printf("Area do comodo: %.2f m2\n", area);
    printf("Potencia total necessaria: %.2f W\n", pt);
    printf("Serao necessarias %d lampadas de %.0f W.\n", totalLampadas, potl);
}