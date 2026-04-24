#include <stdio.h>

int main(){
    float vet[20];
    float somavet = 0, media;
    int cont = 0;
    for(int i = 0; i<20; i++){
        printf("digite a nota ");
        scanf("%f",&vet[i]);
    }
    for(int i = 0; i<20; i++){
        somavet = somavet + vet[i];
    }
    media = somavet/20;
    for(int i = 0; i<20; i++){
        if(vet[i]>6){
            cont++;
        }
    }
    printf("A media da turma foi: %.2f",media);
    printf("\n %d alunos ficaram acima da media",cont);

}




