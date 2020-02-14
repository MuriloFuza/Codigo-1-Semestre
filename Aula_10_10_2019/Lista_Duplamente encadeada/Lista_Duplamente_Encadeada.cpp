#include "Lista_Duplamente_Encadeada.h"
#include <stdlib.h>
#include <stdio.h>

void iniciar(lista *l)
{
    l->head = NULL;
}

int Vazia(lista *l)
{
    return(l->head==NULL);
}//fecha vazia

void exibir(lista *l)
{
    No *p;
    if(Vazia(l))
    {
        printf("\nVazia");
    }else
    {
        p=l->head;
        do{
            printf(":: %d\n",p->info.chave);
            p=p->prox;
        }while(p != NULL);
    }
}//fecha exibir

int inserirInicio(lista *l, tipo_elem c)
{
    No *p;
    p = (No*)malloc(sizeof (No));
    if(p==NULL){
        return 0;
    }
    p->info = c;
    p->ant = NULL;
    p->prox = l->head;
    l->head = p;
    return 1;
}//fecha inserir inicio

int Inserir_apos(lista *l, No *k, tipo_elem c)
{
    No *p = (No*) malloc(sizeof(No));
    if(!p)
    {
        return 0;
    }else
    {
        p->info = c;
        p->prox = k->prox;
        k->prox = p;
        return 1;
    }
}//fecha inserir apos

int inserirOrdenado(lista *l, tipo_elem c)
{
    No *p, *ant;
    if(Vazia(l))
    {
        return (inserirInicio(l,c));
    }
    ant = NULL;
    p = l->head;
    while (p && p->info.chave < c.chave)
    {   
        ant  = p;
        p =  p->prox;
    }
    if(ant == NULL)
    {
        return(inserirInicio(l,c));
    }
    return(Inserir_apos(l,ant,c));
}

void Destruir(lista *l)
{
    No *p = l->head;
    while(p != NULL)
    {
        l->head = p->prox;
        free(p);
        p=l->head;
    }
}

int remover(lista *l, int chave)
{
    No*p,*ant;
    p =l->head;
    ant = NULL;

    if(Vazia(l))
    {
        return 0;
    }
    while (p && p->info.chave < chave)
    {
        ant = p;
        p = p->prox;
    }
    if(p==NULL)
    {
        return 0;
    }
    else if(p->info.chave != chave)
    {
        return 0;
    }
    //Achei e vou remover
    else if(ant == NULL)
    {
        l->head = p->prox;
        free(p);
    }
    //achei e vou remover
    else
    {
        ant->prox = p->prox;
        free(p);
    }
    return 1;    
}

int tamanho(lista *l)
{
    return(tamanho_recusivo(l->head));
}


int tamanho_recusivo(No *p)
{
    if(p==NULL) return 0;
    return (1 + tamanho_recusivo(p->prox));
}


No *busca(lista *l, int chave)
{
    No *p = l->head;
    while (p && p->info.chave < chave)
    {
        p = p->prox;
    }
        if(p == NULL) return p;

        if(p->info.chave == chave) return p;

        return NULL;
    
}