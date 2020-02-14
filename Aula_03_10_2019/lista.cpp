#include "ListaE.h"
#include <stdlib.h>
/*----------------------------------------------*/
void iniciar(lista *a)
{
	//-1 é a posição nula
	int i = 0;
	a->inicio = -1;
	a->dispo=0;
	for(i = 0; i <MAX-1; i++){
		a->M[i].prox = i+1;
	}
	a->M[i].prox = -1;
}
/*----------------------------------------------*/
int Vazia(const lista *a)
{
	return(a->inicio==-1);
}
/*----------------------------------------------*/
int Cheia(const lista *a)
{
	return(a->dispo==-1);
}
/*----------------------------------------------*/
void Destruir(lista *a)
{
	iniciar(a);
}
/*----------------------------------------------*/
int tamanho(lista *a)
{
	int cont =0, i;
	i=a->inicio;
	while (i!=-1)
	{
		cont++;
		i=a->M[i].prox;
	}
	return cont;
}
/*----------------------------------------------*/
int inserirInicio(lista *a, tipo_elem c)
{
	int pos;
	if(Cheia(a)) return 0;
	pos = a->dispo;
	a->dispo=a->M[pos].prox;
	a->M[pos].info = c;
	a->M[pos].prox = a->inicio;
	a->inicio = pos;
	return 1;
}
/*----------------------------------------------*/
int inserirfim(lista *a, tipo_elem c)
{	
	if(Cheia(a))return 0;
	if(Vazia(a)) return(inserirInicio(a,c));
	//procurar ultima posição
	int pos = a->inicio;
	while (a->M[pos].prox!=-1)
	{
		a->M[pos].prox;	
	}
	a->M[pos].prox =a->dispo;
	a->dispo = a->M[a->dispo].prox;
	pos = a->M[pos].prox;
	a->M[pos].info = c;
	a->M[pos].prox = -1;
	return 1;
}
/*----------------------------------------------*/
void exibir(lista *a)
{
	int i;
	if(Vazia(a))
	printf("Nao ha elementos\n");
	else
	{
		i=a->inicio;
		while(i!=-1)
		{
			printf("(%d)=>%d",i,a->M[i].info.chave);
			i=a->M[i].prox;
		}
	}
}
/*----------------------------------------------*/
void Inserir_apos(lista *a, int k, tipo_elem c)
{
	int pos;
	pos = a->dispo;
	a->dispo = a->M[pos].prox;
	a->M[pos].info  = c;
	a->M[pos].prox = a->M[k].prox;
	a->M[k].prox = pos;
}
/*----------------------------------------------*/
int inserirOrdenado(lista *a, tipo_elem c)
{
	if(Cheia(a)) return 0;
	if(Vazia(a)) return (inserirInicio(a,c));
	int k = a->inicio;
	int ant = -1;
	//procurar a posição
	while (a->M[k].info.chave < c.chave && k!= -1)
	{
		ant = k;
		k = a->M[k].prox;
	}
	if(ant == -1) return inserirInicio(a,c);
	Inserir_apos(a, ant, c);
	return 1;
}
/*----------------------------------------------*/
int remover_inicio(lista *a)
{
	if(Vazia(a)) 
	{
		printf("Lista Vazia!");
		system("pause");
		return 0;
	}
	int pos = a->inicio;
	a->inicio = a->M[pos].prox;
	a->M[pos].prox = a->dispo;
	a->dispo = pos;
	return 1;
}
/*----------------------------------------------*/
void remover_apos(lista *a, int k)
{
	int pos;
	pos = a->M[k].prox;
	a->M[k].prox = a->M[pos].prox;
	a->M[k].prox = a->dispo;
	a->dispo = k;
}
/*----------------------------------------------*/
int remover(lista *a, int chave)
{
	int ant, pos;
	if (Vazia(a)) return 0;
	ant = -1;
	pos = a->inicio;
	while(pos != -1 && a->M[pos].info.chave != chave)
	{
		ant  = pos;
		pos = a->M[pos].prox;
	}
	if(pos == -1) return 0;
	if(ant == -1) return (remover_inicio(a));
	remover_apos(a,ant);
	return 1;
}
