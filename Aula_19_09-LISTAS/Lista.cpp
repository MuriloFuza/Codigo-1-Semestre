#include <stdio.h>
#include "Lista.h"
#include <stdlib.h>
//--------------------Incia a estrutura--------------------------//
void Iniciar(Lista *L)
{
    L->nelem = 0;
};
//-----------------------------------------------//

//----------------------Funcao para inserir elementos no inicio da lista-------------------------//
int InserirInicio(Lista *L, tip_elem p)
{
    if(Cheia(L)) return 0;
    for(int i = L->nelem; i>0; i--){
        L->vet[i].chave = L->vet[i-1].chave;
    }
    L->vet[0].chave = p.chave;
    L->nelem++;
    return 1;
};
//-------------------------Fim do Inserir Inicio----------------------//

//---------------------Inserir elementos no fim da lista--------------------------//
int InserirFim(Lista *L, tip_elem p)
{
    if(Cheia(L)) return 0;
    L->vet[L->nelem].chave = p.chave;
    L->nelem++;
    return 1;
};
//-----------------------------------------------//

//--------------------Inserir elementos ordenadamente---------------------------//
int InserirOrdenado(Lista *L, tip_elem p)
{
    int j,i = 0;
    if(Cheia(L)) return 0;
    if(Vazia(L)) return (InserirInicio(L,p));
        while (i< L->nelem && L->vet[i].chave < p.chave)
        {
            i++;
        }
        if(i==L->nelem)
        return (InserirFim(L,p));

        for(j=L->nelem;j>i;j--){
            L->vet[j]=L->vet[j-1];
        }
        L->vet[i]=p;
        L->nelem++;
        return 1;
};
//-----------------------------------------------//

//--------------------Exibir os elementos da lista---------------------------//
void Exibir(Lista *L)
{
    int i;
    if(Vazia(L)){
        printf("\n\n    Lista Vazia!!\n\n");
        system("pause");
        system("cls");
    }else{
        for(int i = 0; i <L->nelem;i++){
            printf("\nKey[%d]: %d\n",i,L->vet[i].chave);
        }//end for
    }//end else
};
//-----------------------------------------------//

//------------------------Remover uma chave especifica do vetor-----------------------//
int Remover(Lista *L, int chave)
{
    if(Vazia(L)) return 0;
    int i;
        for(i=0;i<L->nelem,L->vet[i].chave != chave;i++){}
            if(i==L->nelem) return 0;
            while (i<L->nelem -1)
            {
                L->vet[i] = L->vet[i+1];
                i++;
            }
        L->nelem--;
        return 1;
};
//-----------------------------------------------//
//-----------------------Destruir todos os dados da lista------------------------//
void DestruirDados(Lista *L)
{
    L->nelem = 0;
}
//-----------------------------------------------//

//----------------------Incio funcao para vericar se a lista esta vazia-------------------------//
int Vazia(Lista *L)
{
    return(L->nelem == 0);
};
//-----------------------------------------------//

//---------------------Incio funcao para vericar se a lista esta cheia--------------------------//
int Cheia(Lista *L)
{
     return(L->nelem == max);
};
//-----------------------------------------------//

//---------------------Função para dizer o tamanho do vetor--------------------------//
int tamanho(Lista *L){
    return(L->nelem);
}
//-----------------------------------------------//


int Busca(Lista *L, int chave){

}

int BuscaBinaria(Lista *L, int chave){
    int meio, inicio, fim;
    inicio = 0;
    fim = L->nelem -1;
    while(inicio <= fim){
        if(L->vet[meio].chave == chave)
            return 1;
        if(L->vet[meio].chave < chave)
            inicio = meio+1;
        else
        {
                fim = meio-1;
        }
        meio = (inicio + fim) / 2;
        
    }
    return 0;
}