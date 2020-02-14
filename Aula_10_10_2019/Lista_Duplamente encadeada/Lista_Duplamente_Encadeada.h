                            //IMPLEMENTAÇÃO DOS TIPOS DE DADOS
//TIPO DE DADO

typedef struct 
{
    int chave;
}tipo_elem; 

typedef struct no
{
    tipo_elem info;
    struct no *prox,*ant;
}No; 

typedef struct 
{
    No *head;
}lista;

void iniciar(lista *l);
int Vazia(lista *l);
void Destruir(lista *l);
void exibir(lista *l);
int inserirInicio(lista *l, tipo_elem c);
void Inserir_apos(lista *l, int k, tipo_elem c);
int inserirOrdenado(lista *l, tipo_elem c);
int remover_inicio(lista *l, int chave);
void remover_apos(lista *l, int k);
int remover(lista *l, int chave);
No *busca(lista *l, int chave);
int tamanho(lista *l);
int tamanho_recusivo(No *p);
