#include <stdio.h>
#include <stdlib.h>
#define tf 10
/*	Estrutura de Dados 1
Lista - 4 EX: 1
Aluno: Murilo Fuza da Cunha
Compilador: Code::Blocks 17.12
Sistema Operacional: Windows

1- Crie um programa que contenha um array de float contendo 10 elementos. Imprima o endereço de cada posição
desse array.
*/
int main()
{
    float vet[tf];
    for(int i = 0; i<tf; i++){
        float *p;
        p = &vet[i];
        printf("Indice %d, Endeco %p\n",i,p);
    }
    system("pause");
}
