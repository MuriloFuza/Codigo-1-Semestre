#include "biblioteca.h"

void destruir_rec(no **a)
{
    if((*a) != NULL)
    {
        destruir_rec((*a)->esq);
        destruir_rec((*a)->dir);
        free(*a);
    }
}