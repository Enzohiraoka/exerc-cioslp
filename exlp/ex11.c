#include <stdio.h>

int main(){
    float votostotais, brancos, nulos, validos,pbr,pnl,pval;
    printf("Digite o numero de votos brancos, nulos e validos, respectivamente ");
    scanf("%f",&brancos);
    scanf("%f",&nulos);
    scanf("%f",&validos);
    votostotais = brancos+nulos+validos;
    printf("Numero de votos totais e: %f ",votostotais);
    pbr = brancos/votostotais*100;
    pnl = nulos/votostotais*100;
    pval= validos/votostotais*100;
    printf("A porcentagem de brancos, nulos e validos respectivamente: %f %f %f", pbr, pnl, pval);
}