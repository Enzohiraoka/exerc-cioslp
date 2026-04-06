#include <stdio.h>

int main(){
    float valcar, imp, dist, valf;
    printf("Digite o valor inicial do carro ");
    scanf("%f",&valcar);
    imp = 0.45;
    dist = 0.28;
    valf = valcar+(valcar*imp)+(valcar*dist);
    printf("O valor final do carro sera de: %f",valf);
}