#include <stdio.h>
#include<string.h>
int main(){
    char p1[50];
    int i, tam;

    printf("Palindromo\n");
    printf("Digite a palavra: ");
    fflush(stdin);
    gets(p1);

    //tamanho
    for(i=0;p1[i]!='\0';i++);
    tam = i;

    //comparação

    for(i=0 ;i<tam/2;i++){
        if(p1[i]!=p1[tam-1-i]){
            printf("\nNao eh palindromo");
            break;
        }
    }
        if(i == tam/2)
            printf("\nEh palindromo");

}

