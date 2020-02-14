#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define tf 10
/*	Estrutura de Dados 1
Lista - 3 EX: 2
Aluno: Murilo Fuza da Cunha
Compilador: Dev-C++ 5.11
Sistema Operacional: Windows

2- Faça um programa que receba do usuário dois vetores, A e B, com 10 números inteiros cada. Crie um novo vetor
denominado C calculando C=A-B. Mostre na tela os dados do vetor C.
*/
void insere(int vet[tf], int vetb[tf]){
	int i = 0;
	for(i = 0; i < tf; i++){
		printf("\nInsira um numero para o vetor A : ");
		scanf("%d",&vet[i]);
	}
	printf("\n");
	for(i = 0; i < tf; i++){
		printf("\nInsira um numero para o vetor B : ");
		scanf("%d",&vetb[i]);
	}
	printf("\nfeito!!\n");
	system("pause");
	
}
void calculo(int vet[tf], int vetb[tf], int vetc[tf]){
	int i = 0;
	printf("\n\nRealizando calculo!!\n\n");	
	for(i = 0;i<tf;i++){
		vetc[i] = vet[i] - vetb[i];
	}
	printf("\nfeito!!\n");
	system("pause");
}

void exibe(int vet[tf], int vetb[tf], int vetc[tf]){
	int i = 0;
	printf("\n\nApresentando calculo!!\n\n");
	for(i = 0;i<tf;i++){
		printf("\nA subtracao de A: %d & B: %d eh  = %d",vet[i],vetb[i],vetc[i]);
	}	
}
int main() {
	int i;
	int vet[tf],vetb[tf],vetc[tf];
	printf("	Programa para inserir dois vetores e realizar um subtracao dos dois!!\n\n");
	insere(vet,vetb);
	calculo(vet,vetb,vetc);
	exibe(vet,vetb,vetc);
	printf("\n");
	system("pause");
	return 0;
}
