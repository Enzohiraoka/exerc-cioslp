 /*Escreva uma função que receba um número inteiro e retorne 1 se esse for primo e 0 caso contrário.*/
 #include<stdio.h>

 int eprimo(int);

 int main(){
    int n;
    printf("N: ");
    scanf("%d",&n);
    if(eprimo(n))
        printf("Primo!");
    else
        printf("Não é primo!");
 }

 int eprimo(int n){
    if(n==1)
    return 0;
    for(int i=2; i<n;i++){
        if(n%i==0)
        return 0;
    }
    return 1; 
 }