#include <stdio.h>

int main() {
    float comprimentopista, consumoKm_L, comprimentoKm, totalKm, kmAteParada, litrosNecessarios;
    int totalVoltas, numReabastecimentos, voltasAteParada;
    printf("Digite o comprimento da pista (metros): ");
    scanf("%f", &comprimentopista);
    printf("Digite o numero total de voltas: ");
    scanf("%d", &totalVoltas);
    printf("Digite o numero de reabastecimentos desejados: ");
    scanf("%d", &numReabastecimentos);
    printf("Digite o consumo do carro (Km/L): ");
    scanf("%f", &consumoKm_L);
    comprimentoKm = comprimentopista / 1000.0;
    voltasAteParada = totalVoltas / (numReabastecimentos + 1);
    kmAteParada = voltasAteParada * comprimentoKm;
    litrosNecessarios = kmAteParada / consumoKm_L;
    printf("\nNumero de voltas ate o 1o abastecimento: %d\n", voltasAteParada);
    printf("Litros minimos ate o 1o reabastecimento: %.2f L\n", litrosNecessarios);
}