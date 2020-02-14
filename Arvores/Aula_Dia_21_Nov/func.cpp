#include "biblioteca.h"


void iniciar(arvore *a)
{
    a->raiz = NULL;    
}
//-----------------------------------------------------------------------//
int vazia(arvore *a)
{
    return(!a->raiz);
}
//-----------------------------------------------------------------------//
no *busca(arvore *a, int chave)
{
    if(vazia(a)) return NULL;
    return (busca_rec(a->raiz,&chave));
}
//-----------------------------------------------------------------------//
void destruir(arvore *a)
{
    destruir_rec(a->raiz);
    iniciar(a);
}
//-----------------------------------------------------------------------//
int inserir(arvore *a, tipo_elem v)
{
    return(inserir_rec(&(a->raiz), &v));
}
//-----------------------------------------------------------------------//
int remover(arvore *a, int chave)
{
    return(remover_rec(&(a->raiz), &chave));
}
//-----------------------------------------------------------------------//
void exibir_inordem(arvore *a)
{

}
//-----------------------------------------------------------------------//
void exibir_posordem(arvore *a)
{

}
//-----------------------------------------------------------------------//
void exibir_preordem(arvore *a)
{

}
//-----------------------------------------------------------------------//
void altura(arvore *a)
{

}
//-----------------------------------------------------------------------//

//-------------------------------Funções auxiliares----------------------------------------//
//-------------BUSCA O MENOR-------------//
tipo_elem busca_menor(no *a)
{
    while(a->esq != NULL){
        a = a->esq;
    }
    return a->info;
}

//-------------DESTRUIR-------------//

void destruir_rec(no *a)
{
    if(a != NULL)
    {
        destruir_rec(a->esq);
        destruir_rec(a->dir);
        free(a);
    }
}

//-------------BUSCA-------------//

no *busca_rec(no *a, int *chave)
{
    if(a != NULL) 
    {   
        if(a->info.chave == *chave) return(a);
        if(a->info.chave < *chave);
            return (busca_rec(a->dir,chave));
        return(busca_rec(a->esq,chave));
    }else{
        return NULL;
    }
}

//-------------INSERIR-------------//

int inserir_rec(no **a, tipo_elem *v)
{
    no *p;
    if(*a == NULL)
    {
        p = (no *)malloc(sizeof(no));
        if(p==NULL) return 0;
        p->info = *v;
        p->esq = p->dir = NULL;
        *a = p;
        return 1;
    }
      if(v->chave < (*a)->info.chave)
    {
        return(inserir_rec(&((*a)->esq),v));
    }

    if(v->chave > (*a)->info.chave)
    {
        return(inserir_rec(&((*a)->dir),v));
    }
return 0;
}

//-------------REMOVER-------------//

int remover_rec(no **a, int *chave)
{
    no *p;
    tipo_elem v;
    if(*a==NULL) return 0;
    if( *chave < (*a)->info.chave)
        remover_rec(&((*a)->esq), chave);
    if( *chave > (*a)->info.chave)
        remover_rec(&((*a)->dir), chave);

    //achou caso 1:
    if(!(*a)->dir && !(*a)->esq)
    {
        free(*a);
        *a = NULL;
    }

    //caso 2: sub-arvore a esquerda
    else if((*a)->dir == NULL)
    {
        p = *a;
        *a = (*a)->esq;
        free(p);   
    }

       //caso 2b: sub-arvore a direira
    else if((*a)->esq == NULL)
    {
        p = *a;
        *a = (*a)->dir;
        free(p);   
    }

    //caso 3: possui as duas sub-arvores
    else
    {
        (*a)->info = busca_menor((*a)->dir);
        *chave = (*a)->info.chave;
        return(remover_rec(&(*a)->dir, chave));
    }
    
    return 1;
}


