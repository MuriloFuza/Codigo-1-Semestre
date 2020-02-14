#include "func.cpp"

int main()
{
int op = 999;
no *r;
arvore a;
tipo_elem num;
iniciar(&a);
do
{
    printf("1    -   Inserir\n");
    printf("2    -   exibir\n");
    printf("3    -   buscar\n");
    printf("4    -   cortar arvore\n");
    printf("5    -   remover\n");
    printf("0    -   Sair\n");
    printf("Op: ");
    scanf("%d",&op);

        switch(op)
        {
            case 1:
                printf("Qual numero deseja inserir?\n ");
                printf("...: ");
                scanf("%d",&num.chave);
                if(inserir(&a,num)) printf("inserido");
                else printf("nao inserido");
                system("pause");
                system("cls");
                break;
             case 2:
                printf("\nArvore em in-ordem!\n");
                exibir_inordem(&a);
                printf("\nArvore em pos-ordem!\n");
                exibir_posordem(&a);
                printf("\nArvore em pre-ordem!\n");
                exibir_preordem(&a);
                system("pause");
                system("cls");
                break;

             case 3:
             int nume;
                printf("Qual numero deseja buscar na arvore? ");
                printf("....: ");
                scanf("%d",&nume);
                r = busca(&a,nume);
                if(r != NULL)
                {
                    printf("Resultado...: %d",r->info.chave);
                }
                system("pause");
                system("cls");
                break;

             case 4:
                destruir(&a);
                system("pause");
                system("cls");
                break;

             case 5:
                printf("Qual numero deseja buscar na arvore? ");
                printf("....: ");
                scanf("%d",&nume);
                if(remover(&a,nume))
                {
                    printf("Resultado...: REMOVIDO!!");
                }else{
                    printf("Resultado...: NAO Removido!!");
                }
                system("pause");
                system("cls");
                break;
        }
}while(op != 0);

    system("pause");
}