#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*	Estrutura de Dados 1
Lista - 4 EX: 8
Aluno: Murilo Fuza da Cunha
Compilador: Code::Blocks 17.12
Sistema Operacional: Windows

8- Procure prever o comportamento do programa acima, considerando que a rotina troca_ab foi alterada conforme
indicado abaixo. Depois teste o programa na pr�tica. Indique qual � o valor das vari�veis A, B e X, Y que � escrito na
tela no final da execu��o do programa.
A: ____ B: ____
X: ____ Y: ____

    RESOLU��O
Aqui � visto de cara que a troca ocorre pois ao chamarmos a fun��o passamos seus endere�os onde est�o seus cconteudos,
assim os valores s�o devidamente trocados e A = 20 e B = 10(Espero n�o ter falado bobagem da chamada fun��o), e ao entrarmos
no if chegar a conclus�o que ele � verdadeiro e � feita a opera��o x = 20 /3 + 10  /2 = 11,666... e Y  =20;

1�Print = A=20 - B=10
2�Print = X=11.66 - Y=20

PROBLEMAS
Ao tentar compilar o codigo tive que fazer algumas altera��es na fun��o(int *b) mas funcionou perfeitamente depois.
*/
double x, y;
void troca_ab(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

main(){
int a,b;
a=10;
b=20;
troca_ab(&a,&b);
if ((a > 5) && (b < 15)){
x = a / 3 + b / 2;
y = a;
}
else{
x = a;
y = (a > b);
}
printf("A=%d - B=%d\n",a,b);
printf("X=%.2lf - Y=%.2lf\n",x,y);
getch();
}

