#include <stdio.h>

int main(){
    float p1,p2,opt,media;
    printf("Digite a nota da primeira prova ");
    scanf("%f",&p1);
    printf("Digite a nota da segunda prova ");
    scanf("%f",&p2);
    printf("Digite a nota da optativa, caso nao tenha feito, digite -1 ");
    scanf("%f",&opt);
    if(opt>-1){
        if (p1<p2 && opt>p1){
        p1 = opt;
        }
        if (p1>p2 && opt>p2){
            p2 = opt;
        }
    }
    media = (p1+p2)/2;
    printf("A sua media e: %f", media);
    if(media>=6.0){
        printf("aprovado ");
    }else{
        printf("reprovado");
    }
}