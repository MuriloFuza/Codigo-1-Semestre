#include <stdio.h>

int main(){
    char p1[50], p2[50];
    int i, tam,j;

    printf("Palindromo\n");
    printf("Digite a palavra: ");
    scanf("%s",p1);

    //tamanho
    for(i=0;p1[i]!='\0';i++);
    tam = i;

    //copia inverso

    for(j=0,i=tam-1;i>=0;i--,j++){
            p2[j] = p1[i];
    }
    p2[tam] = '\o';
    //comparação

    for(i=0;i<tam;i++){
        if(p1[i]!=p2[i]){
            printf("\nNao eh palindromo");
            break;
        }
    }
        if(i == tam)
            printf("\nEh palindromo");

}
