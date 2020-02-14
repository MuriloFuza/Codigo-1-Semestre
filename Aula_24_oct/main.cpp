#include <stdio.h>
#include <stdlib.h>
#include "Filas.cpp"

int main()
{
    int op;
    tipo_elem v;
    fila f;
    definir(&f);
    do {
      printf("1 - inserir\n");
      printf("2 - remover\n");
      printf("3 - tamanho\n");
      printf("4 - primeiro elem da lista\n");
      scanf("%d",&op);

        switch (op)
        {
          case 1:
              printf("Insira um numero: ");
              scanf("%d",&v.chave);
              if(inserir(&f,v))
                printf("Inserido!\n");
              else
                printf("Lista cheia\n");
              system("pause");
              system("cls");
            break;

          case 2:
              if(remover(&f)) printf("removido!\n");
              else printf("Lista Vazia!\n");
              system("pause");
              system("cls");
            break;

          case 3:
              printf("Tamanho da fila: %d\n",tamanho(&f));
              system("pause");
              system("cls");
            break;

          case 4:
              printf("Primeiro elemento da lista: %d",comeco_fila(&f));
              system("pause");
              system("cls");
            break;
        }
    } while(op != 0);
}
