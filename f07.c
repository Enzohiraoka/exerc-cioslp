/*Escreva uma função que receba uma string (cadeia de caracteres) e retorne 1 se essa for um palín-
dromo e 0 caso contrário. Um palíndromo é uma palavra ou frase que se lê da mesma maneira nos
dois sentidos - normalmente, da esquerda para a direita ou ao contrário, da direita para a esquerda.
Por exemplo, OVO; ARARA; SOCORRAM-ME, SUBI NO ÓNIBUS EM MARROCOS.*/

#include<stdio.h>
#include<string.h>

int palindromo(char[]);

int main(){
    char texto[30];

    printf("Texto: ");
    fgets(texto,sizeof(texto),stdin);
    texto[strlen(texto)-1] = '\0';
    if(palindromo(texto)){
        printf("e palindromo!");
    }
    else
    printf("Nao e palindromo");

}

int palindromo(char t[]){
    for(int i=0;i<strlen(t)/2;i++){
        if(t[i]!=t[strlen(t)-1-i]){
            return 0;
        }
    }
    return 1; 
}