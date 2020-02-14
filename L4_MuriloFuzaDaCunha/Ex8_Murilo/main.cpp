#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*	Estrutura de Dados 1
Lista - 4 EX: 8
Aluno: Murilo Fuza da Cunha
Compilador: Code::Blocks 17.12
Sistema Operacional: Windows

8- Procure prever o comportamento do programa acima, considerando que a rotina troca_ab foi alterada conforme
indicado abaixo. Depois teste o programa na prática. Indique qual é o valor das variáveis A, B e X, Y que é escrito na
tela no final da execução do programa.
A: ____ B: ____
X: ____ Y: ____

    RESOLUÇÃO
Aqui é visto de cara que a troca ocorre pois ao chamarmos a função passamos seus endereços onde estão seus cconteudos,
assim os valores são devidamente trocados e A = 20 e B = 10(Espero não ter falado bobagem da chamada função), e ao entrarmos
no if chegar a conclusão que ele é verdadeiro e é feita a operação x = 20 /3 + 10  /2 = 11,666... e Y  =20;

1°Print = A=20 - B=10
2°Print = X=11.66 - Y=20

PROBLEMAS
Ao tentar compilar o codigo tive que fazer algumas alterações na função(int *b) mas funcionou perfeitamente depois.
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

