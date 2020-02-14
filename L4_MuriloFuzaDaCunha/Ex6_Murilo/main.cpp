#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/*	Estrutura de Dados 1
Lista - 4 EX: 6
Aluno: Murilo Fuza da Cunha
Compilador: Code::Blocks 17.12
Sistema Operacional: Windows

6- Faça um programa que leia 2 valores e chame uma sub-rotina que receba estas 2 variáveis e troque o seu conteúdo,
ou seja, esta rotina é chamada passando duas variáveis A e B por exemplo, e após a execução da rotina A conterá o
valor de B e B terá o valor de A. O valor das variáveis devem ser lidas no programa principal e imprimidas pelo programa
principal. A sub-rotina deve apenas realizar a troca.
*/
void op(int *a, int *b){
int aux = 0;
    aux = *a;
    *a = *b;
    *b = aux;
}
int main()
{
    int A,B = 0;
    printf("Insira o valor de A: ");
    scanf("%d",&A);
    printf("Insira o valor de B: ");
    scanf("%d",&B);
    printf("\n\nTroca realizada!\n\n");
    op(&A,&B);
    printf("Novo valor de A: %d\nNovo valor de B: %d\n",A,B);


    system("pause");
}
