#include <stdio.h>

int main() {
    int carrosVendidos;
    float valorVendas, salarioFixo, comissaoPorCarro, salarioFinal;
    printf("Digite o numero de carros vendidos: ");
    scanf("%d", &carrosVendidos);
    printf("Digite o valor total das vendas: ");
    scanf("%f", &valorVendas);
    printf("Digite o salario fixo: ");
    scanf("%f", &salarioFixo);
    printf("Digite o valor da comissao por carro vendido em decimal, exemplo, se 10 porcento, use 0.10: ");
    scanf("%f", &comissaoPorCarro);
    salarioFinal = salarioFixo + (carrosVendidos * comissaoPorCarro) + (valorVendas * 0.05);
    printf("O salario final do vendedor e:%f\n", salarioFinal);
}