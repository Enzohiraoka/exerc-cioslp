#include <stdio.h>

int main(){
    int alunos;
    float nota, somanotas = 0, media;
    printf("Quantos alunos a sala tem? ");
    scanf("%d",&alunos);
    for(int i = 0; i<alunos; i++){
        printf("Digite a nota ");
        scanf("%f",&nota);
        somanotas = somanotas + nota;
   }
   media = somanotas/alunos;
   printf("A media das notas foi: %.2f ",media);
}   


