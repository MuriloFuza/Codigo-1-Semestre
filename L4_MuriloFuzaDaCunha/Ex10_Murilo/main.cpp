#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tf 7
/*	Estrutura de Dados 1
Lista - 4 EX: 10
Aluno: Murilo Fuza da Cunha
Compilador: Code::Blocks 17.12
Sistema Operacional: Windows

10- Faça um programa que faz uma ficha de dados de 7 pessoas. A estrutura deve conter os seguintes campos: RG,
Nome da Pessoa, Rua, número da casa. Imprima todos os resultados. Imprima os dados da pessoa mais velha e da
pessoa mais nova. Imprima a média da idade das pessoas.
*/
typedef struct
{
    int rg, numcasa,idade;
    char nome[30];
    char rua[30];

}cadastro;


int main(){
    cadastro C[tf];
    int nova, velha, media =0;
    int posnova = 0;
    int posvelha = 0;
    //for de cadastro
    for (int i=0;i<tf;i++){
        printf("\nNome: ");
        fflush(stdin);
        gets(C[i].nome);
        printf("Idade: ");
        scanf("%d",&C[i].idade);
        printf("RG: ");
        scanf("%d",&C[i].rg);
        printf("Nome da Rua: ");
        fflush(stdin);
        gets(C[i].rua);
        printf("Numero da casa: ");
        scanf("%d",&C[i].numcasa);
    }//end for de cadastro

    //for de idade
        nova = C[0].idade;
        velha = C[0].idade;
    for(int j=0;j<tf;j++){
        if(nova > C[j].idade){
            posnova = j;
            nova = C[j].idade;
        }
        if(velha < C[j].idade){
            posvelha = j;
            velha = C[j].idade;
        }
        media += C[j].idade;
    }//end for de idade
    media = media / tf;

    //inicio for de apresentação
    system("cls");
     for (int i=0;i<tf;i++){
        printf("\nNome: %s",C[i].nome);
        printf("\nIdade: %d",C[i].idade);
        printf("\nRG: %d",C[i].rg);
        printf("\nNome da Rua: %s",C[i].rua);
        printf("\nNumero da casa: %d\n",C[i].numcasa);
    }//end for de apresentação

        printf("\n---------------------------/\n");
        printf("Media das idades: %d",media);
        printf("\n---------------------------/\n");
        printf("Pessoa mais nova: ");
        printf("\nNome: %s",C[posnova].nome);
        printf("\nIdade: %d",C[posnova].idade);
        printf("\nRG: %d",C[posnova].rg);
        printf("\nNome da Rua: %s",C[posnova].rua);
        printf("\nNumero da casa: %d\n",C[posnova].numcasa);
        printf("\n---------------------------/\n");

        printf("\n---------------------------/\n");
        printf("Pessoa mais velha: ");
        printf("\nNome: %s",C[posvelha].nome);
        printf("\nIdade: %d",C[posvelha].idade);
        printf("\nRG: %d",C[posvelha].rg);
        printf("\nNome da Rua: %s",C[posvelha].rua);
        printf("\nNumero da casa: %d\n",C[posvelha].numcasa);
        printf("\n---------------------------/\n");


    system("pause");
}
