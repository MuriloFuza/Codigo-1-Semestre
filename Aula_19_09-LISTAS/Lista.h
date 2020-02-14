
#define max 100
//-------------------Tipo de DADO-------------------//
typedef struct
{
    int chave;// Chave primaria
}tip_elem;
//-----------------------------------------------//

//--------------------Estrutura de DADO -- Lista sequencial estática-------------------//
typedef struct 
{
    tip_elem vet[max];
    int nelem;
}Lista;
//-----------------------------------------------//

//-------------------Operacoes-------------------//
void Iniciar(Lista *L);
int InserirInicio(Lista *L, tip_elem p);
int InserirFim(Lista *L, tip_elem p);
int InserirOrdenado(Lista *L, int chave);
void Exibir(Lista *L);
int Remover(Lista *L, tip_elem p);
void DestruirDados(Lista *L);
int Vazia(Lista *l);
int Cheia(Lista *l);
int tamanho(Lista *L);
int Busca(Lista *L, int chave);
int BuscaBinaria(Lista *L, int chave);
void Ordena(Lista *l);