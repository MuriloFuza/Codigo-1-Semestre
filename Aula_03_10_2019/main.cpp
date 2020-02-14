#include "Lista.cpp"
#include <stdlib.h>
#include <stdio.h>

int main(){
	int op = 999;
	lista um;
	tipo_elem num;
	while(op!=0){
		printf("1	-	Inciar\n");
		printf("2	-	Exibir\n");
		printf("3	-	Inserir no inicio\n");
		printf("4	-	Inserir no fim\n");
		printf("5	-	Inserir ordenado\n");
		printf("6	-	Remover\n");
		printf("0	-	Sair\n");
		printf("Op: ");
		scanf("%d",&op);

		switch (op)
		{
		case 1:{
			iniciar(&um);
			system("cls");
		break;
		}
		case 2:{
			exibir(&um);
			system("pause");
			system("cls");
			break;
		}

		case 3:{
			printf("Qual numero deseja inserir: ");
			scanf("%d",&num.chave);
			inserirInicio(&um,num);
			printf("Inserido!");
			system("pause");
			system("cls");
			break;
		}

		case 4:{
			printf("Qual numero deseja inserir: ");
			scanf("%d",&num.chave);
			inserirfim(&um,num);
			printf("Inserido!");
			system("pause");
			system("cls");
			break;
		}

		case 5:{
			printf("Qual numero deseja inserir: ");
			scanf("%d",&num.chave);
			inserirOrdenado(&um,num);
			printf("Inserido!");
			system("pause");
			system("cls");
			break;
		}

		case 6:{
			printf("Qual numero deseja remover: ");
			scanf("%d",&num.chave);
			remover(&um,num.chave);
			printf("Removido");
			system("pause");
			system("cls");
			break;
		}
		
		}
	}


	return 0;
}