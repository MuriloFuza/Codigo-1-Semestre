#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define tf 4
/*	Estrutura de Dados 1
Lista - 3 EX: 3
Aluno: Murilo Fuza da Cunha
Compilador: Dev-C++ 5.11
Sistema Operacional: Windows

3- Leia duas matrizes 4x4 e escreva uma terceira com os maiores valores de cada posição das matrizes lidas.
*/
void insere(int mat[tf][tf], int matb[tf][tf]){
	int i,j = 0;
	for(i=0;i<tf;i++){
		for(j=0;j<tf;j++){
			printf("Insira um numero para Matriz A: ");
			scanf("%d",&mat[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<tf;i++){
		for(j=0;j<tf;j++){
			printf("Insira um numero para Matriz B: ");
			scanf("%d",&matb[i][j]);
		}
	}
}

void calcula(int mat[tf][tf], int matb[tf][tf], int matc[tf][tf]){
	int i,j;
	
	for(i=0;i<tf;i++){
		for(j=0;j<tf;j++){
			if(mat[i][j]>matb[i][j]){
				matc[i][j] = mat[i][j];
			}else{
				matc[i][j] = matb[i][j];
			}
		}
	}
	printf("Calculo feito!!\n");
	system("pause");
	system("cls");
}

void exibe(int mat[tf][tf], int matb[tf][tf], int matc[tf][tf]){
	int i,j;
	printf("\n\nMatriz A:\n");
	for(i=0;i<tf;i++){
		for(j=0;j<tf;j++){
			printf("%d_",mat[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\nMatriz B:\n");
	for(i=0;i<tf;i++){
		for(j=0;j<tf;j++){
			printf("%d_",matb[i][j]);
		}
		printf("\n");
	}
	
		printf("\n\nMatriz C Maiores:\n");
	for(i=0;i<tf;i++){
		for(j=0;j<tf;j++){
			printf("%d_",matc[i][j]);
		}
		printf("\n");
	}
	
	
}

int main(){
	int mat[tf][tf],matb[tf][tf],matc[tf][tf];
	int op = 0;
	printf("		Programa para inserir numeros em matrizes e guardar seus maiores numeros\n\n");
	
	while(op != 4){
		printf("\n");
		printf("1	-	Inserir numeros nas matrizes\n");
		printf("2	-	Realizar operacao de classificar os maiores numeros\n");
		printf("3	-	Mostrar a matriz dos maiores\n");
		printf("4	-	Sair\n");
		printf("Opcao: "); 
		scanf("%d",&op);
		
			switch(op){
				
				case 1:{
					printf("\n");
					insere(mat,matb);
					break;
				}
				
				case 2:{
					printf("\n");
					calcula(mat,matb,matc);
					break;
				}
				
				case 3:{
					printf("\n");
					exibe(mat,matb,matc);
					break;
				}
				
			}
	}
	
	
	system("pause");
	return 0;
}
