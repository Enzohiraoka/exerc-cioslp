#include <stdio.h>

int main(){
    int a[10];
    float vx, m[10];
    printf("Digite um multiplicador ");
    scanf("%f",&vx);
    for(int i = 0; i<10; i++){
        printf("Digite o valor a ser multiplicado: ");
        scanf("%d",&a[i]);
        m[i] = a[i] * vx;

    }
    for(int i = 0; i<10; i++){
        printf("\nResultado com o multiplicador: %.2f ",m[i]);

    }
}

/*82) Ler um vetor A de 10 números. Após, ler mais um número e guardar em uma variável X.
Armazenar em um vetor M o resultado de cada elemento de A multiplicado pelo valor X. Logo após,
imprimir o vetor M.*/