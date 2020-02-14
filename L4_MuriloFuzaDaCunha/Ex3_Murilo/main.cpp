#include <stdio.h>
#include <stdlib.h>
#define tf 10
/*	Estrutura de Dados 1
Lista - 4 EX: 3
Aluno: Murilo Fuza da Cunha
Compilador: Code::Blocks 17.12
Sistema Operacional: Windows

3- Escreva um programa que imprima um vetor de inteiros na ordem inversa endere�ando os
elementos com um ponteiro.
*/
int main()
{
    int vet[tf] = {0,1,2,3,4,5,6,7,8,9};
    int *p;
    for(int i = tf-1; i>=0;i--){
        p = &vet[i];
        printf("Indice %d, Pos %p, Num: %d\n",i,p,vet[i]);
    }

    system("pause");
}
