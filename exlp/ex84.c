#include <stdio.h>

int main(){
    int n;
    printf("insira numero de somas: ");
    scanf("%d", &n);
    int a[n], b[n], soma[n]; 
    for(int i = 0; i<n; i++){
        printf("Digite o valor a ser somado ");
        scanf("%d",&a[i]);
        printf("Digite o valor a ser somado ");
        scanf("%d",&b[i]);
        soma[i] = a[i] + b[i];
    }
    for(int i=0; i<n; i++){
        printf("\nA soma e: %d",soma[i]);
    }

}
