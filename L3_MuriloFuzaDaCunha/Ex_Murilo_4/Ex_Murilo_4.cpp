#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define tf 3
#define tl 6
/*	Estrutura de Dados 1
Lista - 3 EX: 4
Aluno: Murilo Fuza da Cunha
Compilador: Dev-C++ 5.11
Sistema Operacional: Windows

4- Faça um programa que leia uma matriz 3x6 com valores reais.
(a) Imprima a soma de todos os elementos das colunas ímpares;
(b) Imprima a média aritmética dos elementos da segunda e quarta colunas;
(c) Substitua os valores da sexta coluna pela soma dos valores das colunas 1 e 2;
(d) Imprima a matriz modificada.
*/

void insere(double mat[tf][tl]){
	int i,j = 0;
	for(i=0;i<tf;i++){
		for(j=0;j<tl;j++){
			printf("Insira um numero para Matriz[%d][%d]: ",i,j);
			scanf("%lf",&mat[i][j]);
		}
	}
}

void calculasoma(double mat[tf][tl]){
	double soma = 0;
	int i,j = 0;
	for(i=0;i<tf;i++){
		for(j=0;j<tl;j++){
			if(j % 2 == 0){
				
			}else{
				soma +=mat[i][j];
			}
		}
	}
	printf("\n Imprimindo\n");
	printf("Soma das colunas impares: %.2lf",soma);
}
/*
	Professora, aqui dizia fazer a media da 2 e 4 coluna, que no caso corresponderiam a coluna 1 e 3
	da matriz, Ex: 0,1,2,3,5; 
	Espero ter entendido certo!
*/
void mediaari(double mat[tf][tl]){
	double soma = 0;
	double media = 0;
	int i,j = 0;
	for(i=0;i<tf;i++){
		for(j=0;j<tl;j++){
			if((j == 1) || (j == 3)){
				soma += mat[i][j];
			}else{
				
			}
		}
	}
	media = soma / (tl * 2);
	printf("\n Imprimindo\n");
	printf("Media aritimetica das colunas impares: %.2lf",media);
}
void substitui(double mat[tf][tl]){
	int i,j = 0;
	for(i=0;i<tf;i++){
		for(j=0;j<tl;j++){
			if(j == 5){
				mat[i][j] = mat[i][1] + mat[i][2];
			}
		}
	}
	printf("\n Substituido\n");
}

void exibe(double mat[tf][tl]){
	int i,j;
	printf("\n\nMatriz Modificada:\n");
	for(i=0;i<tf;i++){
		for(j=0;j<tl;j++){
			printf("%2.0lf_",mat[i][j]);
		}
		printf("\n");
	}
}
int main(){
	double mat[tf][tl];
	
	int op = 0;
	printf("		Programa para inserir numeros em matrizes e realizar operacoes\n\n");
	
	while(op != 6){
		printf("\n");
		printf("1	-	Inserir numeros nas matrizes\n");
		printf("2	-	imprimir a soma de todos os elementos das colunas impares\n");
		printf("3	-	Media aritimetica dos elementos da segunda e quarta coluna\n");
		printf("4	-	Substituir os valores da sexta coluna pela soma dos valor da 1 e 2\n");
		printf("5	-	Imprimir a raiz modificada\n");
		printf("6	-	Sair\n");
		printf("Opcao: "); 
		scanf("%d",&op);
		
			switch(op){
				
				case 1:{
					system("cls");
					printf("\n");
					insere(mat);
					break;
				}
				
				case 2:{
					system("cls");
					printf("\n");
					calculasoma(mat);
					break;
				}
				
				case 3:{
					system("cls");
					printf("\n");
					mediaari(mat);
					break;
				}
				
				case 4:{
					system("cls");
					printf("\n");
					substitui(mat);
					break;
				}
				
				case 5:{
					system("cls");
					printf("\n");
					exibe(mat);
					break;
				}
				
			}
	}
	
	system("pause");
	return 0;
}
