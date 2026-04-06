#include <stdio.h>
#include <locale.h>

int main(){
    float cm, m;
    printf("Digite sua medida em metros. ");
    scanf("%f",&cm);
    m = cm*100;
    printf("Sua medida em cm e:%f\n", m);
}