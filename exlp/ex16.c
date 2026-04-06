#include <stdio.h>

int main(){
    float n1,n2,n3,media;
    printf("Digite as notas das provas, respectivamente ");
    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);
    media = ((n1*2)+(n2*3)+(n3*5))/10;
    printf("Sua media e de: %f",media);
}