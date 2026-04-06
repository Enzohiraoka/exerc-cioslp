#include <stdio.h>

int main() {
    float kmInicio, kmFim, litrosGastos, valorRecebido;
    float distancia, mediaConsumo, custoCombustivel, lucroLiquido;
    float PRECO_LITRO = 2.90;
    printf("Digite a marcacao do odometro no inicio do dia: ");
    scanf("%f", &kmInicio);
    printf("Digite a marcacao do odometro no final do dia: ");
    scanf("%f", &kmFim);
    printf("Digite a quantidade de litros de combustivel gastos: ");
    scanf("%f", &litrosGastos);
    printf("Digite o valor total recebido dos passageiros: ");
    scanf("%f", &valorRecebido);
    distancia = kmFim - kmInicio;
    mediaConsumo = distancia / litrosGastos;
    custoCombustivel = litrosGastos * PRECO_LITRO;
    lucroLiquido = valorRecebido - custoCombustivel;
    printf("\nMedia de consumo: %.2f Km/L\n", mediaConsumo);
    printf("Lucro liquido do dia: R$ %.2f\n", lucroLiquido);
}