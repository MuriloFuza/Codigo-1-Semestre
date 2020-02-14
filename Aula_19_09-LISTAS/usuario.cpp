#include <stdio.h>
#include "Lista.cpp"
int main(){

    Lista L;
    int op;
    tip_elem p;
    Iniciar(&L);
    do{
        printf("\n1    -   Verificar o estado da lista(VAZIA/CHEIA)\n");
        printf("2    -   Inserir primeiro\n");
        printf("3    -   Inserir ultimo\n");
        printf("4    -   Exibir\n");
        printf("5    -   Destruir todos os dados\n");
        printf("6    -   Remover dado especifico\n");
        printf("7    -   Inserir elemento ordenado\n");
        printf("8    -   Apresentar o tamanho do vetor\n");
        printf("0    -   Sair\n");
        printf("Digite a opcao: ");
        scanf("%d",&op);

            switch (op)
            {
            case 1:
                if(Vazia(&L))
                    printf("\n\nVazia\n");
                else
                {
                    printf("\n\nNao Vazia\n");
                }
                system("pause");
                system("cls");
                break;

            case 2:
                printf("\n\nDigite um numero: ");
                scanf("%d",&p.chave);
                if(InserirInicio(&L,p))
                    printf("\nInserido\n");
                else
                {
                    printf("\nNao foi possivel inserir\n");
                }
                system("pause");
                system("cls");
                break;  

            case 3:

                printf("\n\nDigite um numero: ");
                scanf("%d",&p.chave);
                if(InserirFim(&L,p))
                    printf("\nInserido\n");
                else
                {
                    printf("Nao foi possivel adicionar\n");
                }
                system("pause");
                system("cls");
            break;    

            case 4:
            system("cls");
                printf("\n          Exibindo\n\n");
                Exibir(&L);
                system("pause");
                system("cls");
            break;

            case 5:
                DestruirDados(&L);
            break;

            case 6:
            
                printf("Insira a chave a ser deletada: ");
                scanf("%d",&p.chave);
                if(Remover(&L,p.chave)) printf("\nRemovido\n");
                else{
                    printf("\nNum deu\n");
                }
            break;

             case 7:
             
            printf("\n\nDigite um numero: ");
                scanf("%d",&p.chave);
                if(InserirOrdenado(&L,p))
                    printf("\nInserido\n");
                else
                {
                    printf("\nNao foi possivel inserir\n");
                }
                system("pause");
                system("cls");
             break;

            case 8:
                system("cls");
                printf("Tamanho do vetor: %d\n",tamanho(&L));
                system("pause");
                system("cls");
            break;

            default:
                break;
            }
    }while (op != 0);
    return 0;
}