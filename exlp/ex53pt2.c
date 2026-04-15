#include <stdio.h>

int main(){
    int N;
    do{ 
    printf("Digite um numero ");
    scanf("%d", &N);
    }while (N<=0);
    for(N; N>=1; N--)
    printf("%d ", N);
}
