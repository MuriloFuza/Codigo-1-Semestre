#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define tf 10
/*	Estrutura de Dados 1
Lista - 3 EX: 1
Aluno: Murilo Fuza da Cunha
Compilador: Dev-C++ 5.11
Sistema Operacional: Windows

1- Leia 10 números inteiros e armazene em um vetor. Em seguida escreva os elementos que são primos e suas
respectivas posições no vetor.
*/
int main() {
	int vet[tf];
	int i = 0;
	int p = 0;
	printf("	Programa para inserir numeros num vetor e apresentar os nums primos!!\n\n");
	
	for( i = 0; i < tf; i++){
		printf("Entre com um numero inteiro: ");
		scanf("%d",&vet[i]);
	}
	printf("\n");
	for(i = 0; i < tf;i++){
		for (int j = 2; j <= vet[i] / 2; j++) {
		    if (vet[i] % j == 0) {
		    	p = 1;
		       break;
		    }
		}
		    if(vet[i] > 1){
		    	if(p == 0){
		    		printf("Numero %d na posicao %d eh primo!!\n",vet[i],i);
				}else{
					p = 0;
				}
 		}
	}
	
	system("pause");
	return 0;
}
