#include <stdio.h>
#include <stdlib.h>
#define tf 100
/*	Estrutura de Dados 1
Lista - 3 EX: 5
Aluno: Murilo Fuza da Cunha
Compilador: Dev-C++ 5.11
Sistema Operacional: Windows

5- Escrever um algoritmo e um programa em C que produza na tela um triângulo de Pascal de grau “n” usando uma
matriz. Abaixo temos um triângulo de Pascal de grau 6 (isto é, com seis linhas):
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
*/
int main() {
	int matriz[tf][tf];
	int n;
	int i,j =0 ;
	printf("digite o grau da piramide: ");
	scanf("%d",&n);
	for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= i; j++) {
				if(i == j) {
					matriz[i][j] = 1;
				} else {
					matriz[i][j] = 0;
				}
				if(matriz[i][j] == 0) {
					matriz[i][j] = matriz[i - 1][j] + matriz[i - 1][j - 1];
				}
				printf("%d ",matriz[i][j]);
			}
			printf("\n");
		}
	
	system("pause");
	return 0;
}
