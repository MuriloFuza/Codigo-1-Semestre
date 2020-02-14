#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*	Estrutura de Dados 1
Lista - 3 EX: 6
Aluno: Murilo Fuza da Cunha
Compilador: Dev-C++ 5.11
Sistema Operacional: Windows

6- Faça um programa que receba uma palavra e a imprima de trás-para-frente.
*/
int main() {
	char palavra[30];
	int i,pala;
	printf("	Programa que receba uma palavra e a imprima de tras-para-frente\n\n");
	printf("\nInsira o nome: ");
	gets(palavra);

	pala = strlen(palavra);

	printf("\nNome ao contrario: ");
	for(i = pala-1; i >= 0;i--)
	printf("%c",palavra[i]);
	printf("\n");
	system("pause");
	return 0;
}
