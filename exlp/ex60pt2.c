#include <stdio.h>

int main(){
    int n, somaint = 0, foraint = 0;
    for(int i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d ",&n);
            if(n>=10 && n<=20){
                somaint = somaint + 1;
        }
        else{
            foraint = foraint + 1;
        }
    }
    printf("valores dentro do intervalo: %d ",somaint);
    printf("\nvalores fora do intervalo: %d ",foraint);
}









