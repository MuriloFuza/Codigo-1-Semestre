#include <stdio.h>
#include <stdlib.h>
#define tf 3
/*	Estrutura de Dados 1
Lista - 4 EX: 2
Aluno: Murilo Fuza da Cunha
Compilador: Code::Blocks 17.12
Sistema Operacional: Windows

2- Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas. Imprima o endereço de cada
posição dessa matriz.
*/
int main()
{
    float mat[tf][tf];
    float *p;
    for(int i = 0; i<tf;i++){
        for(int j =0; j<tf;j++){
                p = &mat[i][j];
            printf("Indice [%d][%d], Endereco %p\n",i,j,p);
        }
    }
    system("pause");
}
