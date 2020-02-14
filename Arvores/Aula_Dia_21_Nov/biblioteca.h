#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
typedef struct 
{
    int chave;
}tipo_elem;

typedef struct no
{
    tipo_elem info;
    struct no *esq, *dir;
}no;

typedef struct
{
    no *raiz;
}arvore;

//operações

void iniciar(arvore *a);
int vazia(arvore *a);
no *busca(arvore *a, int chave);
void destruir(arvore *a);
int inserir(arvore *a, tipo_elem v);
int remover(arvore *a, int chave);
void exibir_inordem(arvore *a);
void exibir_posordem(arvore *a);
void exibir_preordem(arvore *a);
void altura(arvore *a);

//--------OPERAÇÕES AUXILIARES--------//

void destruir_rec(no *a);
no *busca_rec(no *a, int *chave);
int inserir_rec(no **a, tipo_elem *v);
int remover_rec (no **a, int *chave);
tipo_elem busca_menor(no *a);