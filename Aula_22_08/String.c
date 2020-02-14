#include <stdio.h>
#include <string.h>

void compara(char s1[], char s2[]){

            if(strcmp(s1,s2) == 1){
                printf("\n Diferentes");
            }else{
                printf("\n Iguais");
                }


            if(strlen(s1) < strlen(s2) ){
                printf("\n Segunda maior que a primeira");
            }else if(strlen(s1) == strlen(s2) ){
                printf("\n Tamanho igual");
            }else{
                printf("\n Primeira maior que a segunda");
            }

}

/*
int compara(char s1[], char s2[]){
        int i;
        for(i=0;s1[i]!='\0' && s2[i]!='\0' && s1[i]==s2[i];i++);

        if(s1[i]=='\0' && s2[i]=='\0')
        return (0);

        if(s1[i]=='\0')
            return (-1);
        if(s2[i]=='\0')
            return (1);

        if(s1[i]<s2[i])
            return -1;
        return 1;
}
*/
void copia(char s1[], char s2[]){
    char s3[30];
    strcpy(s2,s1);
    strcpy(s3,"Voce digitou a string:");
    printf("\n %s %s",s3,s2);
}
int main(){
        char s1[30], s2[30];

        printf("\nNome 1: ");
        fflush(stdin);
        gets(s1);
        printf("Nome 2: ");
        fflush(stdin);
        gets(s2);
        printf("\nComparacao:");
        compara(s1,s2);
        printf("\n");
        printf("\nCopia:");
        copia(s1,s2);
         printf("\n");
}
