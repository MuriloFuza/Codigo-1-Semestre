#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*	Estrutura de Dados 1
Lista - 3 EX: 7
Aluno: Murilo Fuza da Cunha
Compilador: Dev-C++ 5.11
Sistema Operacional: Windows

7- Faça um programa que receba um nome e retorne quantas letras tem esse nome.
*/
int main() {
	int i,letras = 0;
	char nome[50];
	printf("	Programa para contar as letras de seu nome!!\n\n");
	printf("Insira o nome: ");
	gets(nome);
	letras = strlen(nome);
	printf("Este nome possui %d letras incluindo espacos\n",letras);
	
	system("pause");
	return 0;
}
