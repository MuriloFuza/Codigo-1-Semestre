#define max 8
typedef struct
{
  int chave;
}tipo_elem;

typedef struct
{
  tipo_elem M[max];
  int inicio, fim;
}fila;

void definir(fila *f);
int vazia(fila *f);
int cheia(fila *f);
int inserir(fila *f, tipo_elem v);
int remover(fila *f);
int tamanho(fila *f);
tipo_elem comeco_fila(fila *f);
