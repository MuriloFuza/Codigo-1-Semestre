#include <stdlib.h>
#include <stdio.h>
#include "Fila.h"

void definir(fila *f)
{
  f->inicio = f->fim =0;
}

int vazia(fila *f)
{
  return(f->inicio == f->fim);
}

int cheia(fila *f)
{
  return((f->fim+1) % max == f->inicio);
}

int inserir(fila *f, tipo_elem v)
{
  if(cheia(f)) return 0;
  f->fim = (f->fim+1) % max;
  f->M[f->fim] = v;
  return 1;
}

int remover(fila *f)
{
  if(vazia(f)) return 0;
  f->inicio = (f->inicio+1) % max;
  return 1;
}

int tamanho(fila *f)
{
  if(f->fim >= f->inicio) return f->fim - f->inicio;
    return max - f->inicio + f->fim;
}

tipo_elem comeco_fila(fila *f)
{
  return(f->M[(f->inicio+1) % max]);
}
