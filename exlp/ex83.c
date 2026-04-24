#include <stdio.h>

int main(){
    int v[20];

    for(int i = 0; i<20; i++){
    printf("Digite um valor ");
    scanf("%d",&v[i]);
    }

    for(int i = 19; i>=0; i--){
        printf("%d ",v[i]);
    }
}