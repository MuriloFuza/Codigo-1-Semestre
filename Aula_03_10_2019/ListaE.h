#include <stdio.h>
#define MAX 100

typedef struct
{
	int chave, count;
} tipo_elem;

typedef struct
{
	tipo_elem info;
	int prox;
} no;

typedef struct{
	no M[MAX];
	int inicio, dispo;
}lista;

void iniciar(lista *a);
int Vazia(const lista *a);
int Cheia(const lista *a);
void Destruir(lista *a);
int tamanho(lista *a);
void exibir(lista *a);
int inserirInicio(lista *a, tipo_elem c);
int inserirfim(lista *a, tipo_elem c);
void Inserir_apos(lista *a, int k, tipo_elem c);
int inserirOrdenado(lista *a, tipo_elem c);
int remover_inicio(lista *a, int chave);
void remover_apos(lista *a, int k);
int remover(lista *a, int chave);
int busca(lista *a, tipo_elem c);
/*
int ordenadoCrescente(lista *a);
int ordenadoDecrescente(lista *a);
void copia(lista *a, lista *b);
int removerIndice(lista *a, int k);
int copiaNaoRepetidos(lista *a, lista *b);
void inverter(lista *a, lista *b);
void intercala(lista *a, lista *b, lista *c);
void contElem(lista *a, lista *b);
void exibirCont(lista *a);
int contarMaior(lista *a);
int contarMenor(lista *a);
*/
