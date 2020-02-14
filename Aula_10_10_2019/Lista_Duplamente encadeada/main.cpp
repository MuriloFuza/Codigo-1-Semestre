#include "Lista_Duplamente_Encadeada.cpp"
#include <stdlib.h>
#include <stdio.h>

int main(){
	int op = 999;
	lista um;
	tipo_elem num;

	while(op!=0){
		printf("1	-	Inciar\n");
		printf("2	-	Exibir\n");
		printf("3	-	Inserir ordenado\n");
		printf("4	-	Remover\n");
        printf("5   	-   	Destruir\n");
		printf("6	-	Buscar\n");
		printf("7	-	Retornar tamanho da lista");
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
			inserirOrdenado(&um,num);
			printf("Inserido!");
			system("pause");
			system("cls");
			break;
		}

		case 4:{
			printf("Qual numero deseja remover: ");
			scanf("%d",&num.chave);
			remover(&um,num.chave);
			printf("Removido");
			system("pause");
			system("cls");
			break;
		}

        case 5:{
			Destruir(&um);
			printf("Destuido");
			system("pause");
			system("cls");
			break;
		}

		case 6:{
			printf("Que numero deseja buscar: ");
			scanf("%d",&num.chave);
			if(busca(&um, num.chave))
			{
				printf("Existe na lista !\n");
				system("pause");
				system("cls");
			}else
			{
				printf("Nao existe na lista !\n");
				system("pause");
				system("cls");
			}
		}
		
		case 7:{
			printf("Tamanho da lista: %d\n",tamanho(&um));
			system("pause");
			system("cls");
		}

		
		}
	}


	return 0;
}