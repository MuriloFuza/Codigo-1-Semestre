//--------------------------------TIPOS_DE_DADOS--------------------------------//

typedef struct {
    int num;
    int den;
}Racional;

//--------------------------------OPERAÇÕES--------------------------------//

Racional Define(int N, int D);
/* Gera um número racional a partir de dois inteiros,
sendo o segundo não nulo */


Racional Soma(Racional R1, Racional R2); 
/* Soma dois números racionais R1 e R2 e retorna o
resultado */

Racional Multiplica(Racional R1, Racional R2);
/* Multiplica dois números racionais R1 e R2 e
retorna o resultado retorna o resultado */


int TestaIgualdade(Racional R1, Racional R2);
/* Verifica se 2 números racionais R1 e R2 possuem
numeradores e denominadores iguais. Retorna 1
nesse caso e 0 caso contrário */

void exibe(Racional R1, Racional R2);