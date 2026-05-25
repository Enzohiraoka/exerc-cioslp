/*Escreva uma função que dados dois números inteiros x e y, com x < y, determine quantos números
primos existem entre esses.*/

#include<stdio.h>

int eprimo(int);

int main(){
    int n1, n2, total = 0; 
    printf("Digite os numeros: ");
    scanf("%d", &n1);
    scanf("%d", &n2);
    for(int i = n1; i <= n2; i++){
        if(eprimo(i)) { 
            total++;    
        }
    }
    printf("Total de numeros primos entre eles: %d\n", total);
}

int eprimo(int n){
    if(n <= 1) 
        return 0;
        
    for(int i = 2; i < n; i++){
        if(n % i == 0)
            return 0; 
    }
    return 1; 
}