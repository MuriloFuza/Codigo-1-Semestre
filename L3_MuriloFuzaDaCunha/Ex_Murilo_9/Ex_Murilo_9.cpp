#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
/*	Estrutura de Dados 1
Lista - 3 EX: 9
Aluno: Murilo Fuza da Cunha
Compilador: Dev-C++ 5.11
Sistema Operacional: Windows

8- Escreva um programa que leia a idade e o primeiro nome de até 10 pessoas. Seu programa deve terminar quando
uma idade negativa for digitada. Ao terminar, seu programa deve escrever o nome e a idade da pessoa mais jovem e
da mais velha.
*/
void cripto(char palavra[15], int taman){
	int i =0;
	printf("Insira a palavra: ");
	scanf("%s",palavra);
	
	taman = strlen(palavra);
	for(i =0; i< taman;i++){
		palavra[i] += 3;
	}
	
	printf("Palavra criptografada!!\n");
	printf("palavra : %s\n",palavra);
	system("pause");

	
}

void descripto(int taman, char palavracrpt[15]){
	int i=0;
	printf("Insira a palavra para ser descriptografada: ");
	scanf("%s",palavracrpt);
	printf("\nDescriptografando....\n");
	taman = strlen(palavracrpt);
		for(i =0; i< taman;i++){
		palavracrpt[i] -= 3;
	}

	printf("Descriptografada: %s\n",palavracrpt);
	system("pause");
}

int main() {
	char palavra[15];
	char palavracrpt[15];
	int taman =0 ;
	int op = 0;
	printf("		Programa criptografar e descriptografar uma palavra\n\n");
	
	while(op != 3){
		printf("\n");
		printf("1	-	Insere a palavra a ser criptogravada\n");
		printf("2	-	Descripografa a palavra\n");
		printf("3	-	Sair\n");
		printf("Opcao: "); 
		scanf("%d",&op);
		
			switch(op){
				
				case 1:{
					printf("\n");
					cripto(palavra,taman);
					break;
				}
				
				case 2:{
					printf("\n");
					descripto(taman,palavracrpt);
					break;
				}
			
				
			}
	}
	
	system("pause");
	return 0;
}
