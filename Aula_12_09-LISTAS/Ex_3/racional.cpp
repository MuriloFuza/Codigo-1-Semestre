#include "racional.h"
#include <stdio.h>
Racional Define(int N, int D){
    Racional r;
    r.num = N;
    r.den = D;
    return r;
}

Racional Soma(Racional R1, Racional R2){
    Racional r;
    r.num =  R1.num * R2.den + R1.den * R2.num;
    r.den = R1.den * R2.den;
    return r;
}

Racional Multiplica(Racional R1, Racional R2){
    Racional r;
    r.num = R1.num*R2.num;
    r.den = R1.den*R2.den;
    return r;
}

int TestaIgualdade(Racional R1, Racional R2){
    return((float) R1.num/R1.den == (float)R2.num/R2.den);
}

void exibe(Racional R){
    printf("%d/%d",R.num,R.den);
}