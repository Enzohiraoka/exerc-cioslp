#include <stdio.h>

int main(){
    int n, soma = 0;
    for(int i=0; i<10; i++){
    printf("digite um numero ");
    scanf("%d", &n);
    if(n<40){
        soma = n + soma;
    }
}
    printf("A soma dos inferiores a 40: %d", soma);
}
