#include <stdio.h>

int main(){
    float c,f;
    printf("Insira a temperatura em fahrenheit ");
    scanf("%f",&f);
    c =  5*((f-32)/9);
    printf("sua temperatura em celsius é: %f",c);

}