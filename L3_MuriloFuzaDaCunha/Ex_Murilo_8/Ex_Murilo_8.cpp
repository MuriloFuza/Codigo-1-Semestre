#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tf 10
/*	Estrutura de Dados 1
Lista - 3 EX: 8
Aluno: Murilo Fuza da Cunha
Compilador: Dev-C++ 5.11
Sistema Operacional: Windows

8- Escreva um programa que leia a idade e o primeiro nome de até 10 pessoas. Seu programa deve terminar quando
uma idade negativa for digitada. Ao terminar, seu programa deve escrever o nome e a idade da pessoa mais jovem e
da mais velha.
*/
typedef struct pessoa{
	char nome[30];
	int idade;
}vet;
int main() {
	int menor = 100;
	int maior = 0;
	int nova = 0;
	int velha = 0;
	vet pessoa[tf];
	
	printf("	Programa para calcular a pessoa mais jovem e mais velha!!\n\n");
	for(int i = 0; i < tf; i++) {
		printf("insira o nome: ");
		scanf("%s",&pessoa[i].nome);
		printf("insira a idade: ");
		scanf("%d", &pessoa[i].idade);
		printf("\n");
		if(pessoa[i].idade < 0) {
			break;
		} else if(pessoa[i].idade < menor) {
			menor = pessoa[i].idade;
			nova = i;
		} else if(pessoa[i].idade > maior) {
			maior = pessoa[i].idade;
			velha = i;
		}
	}
	printf("\n");
	printf("Pessoa mais nova: \n");
	printf("nome: %s\n idade: %d",pessoa[nova].nome,pessoa[nova].idade);
	printf("\nPessoa mais velha: \n");
	printf("nome: %s\n idade: %d",pessoa[velha].nome,pessoa[velha].idade);
	printf("\n");
	system("pause");

	return 0;
}
