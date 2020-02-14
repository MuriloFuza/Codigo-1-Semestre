#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/*	Estrutura de Dados 1
Lista - 4 EX: 7
Aluno: Murilo Fuza da Cunha
Compilador: Code::Blocks 17.12
Sistema Operacional: Windows

7- Procure prever o comportamento do programa abaixo e depois teste o programa na prática. Indique qual é o valor
das variáveis A, B e X, Y que é escrito na tela no final da execução do programa.
A: ____ B: ____
X: ____ Y: ____

RESOLUÇÃO
    Utilizando o teste de mesa temos que na função A vai receber o valor de b no principal e B vai receber o valor de a no principal
    seguindo temp ira receber 2o e a recebera 10, mas ao final a = 10 e b = temp == 20;
    O primeiro IF é falso então entramos no else que é: X = 10 e Y = 0, pois retorna false em a> b;
    no printf A=10 - B=0;
       printf X=10.00 - Y=0.00;
       agora vou verificar se aceitei e confirmo abaixo do programa principal.
*/
double x, y;
troca_ab(int a, int b){
int temp;
temp=a;
a=b;
b=temp;
}
int main()
{
    int a,b;
    a=10;
    b=20;
    troca_ab(b,a);
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
system("pause");

//Aparentemente me Equivoquei ao escrever acima e disse que no 1° print seria A=10 - B=0 mas o correto eh A=10 - B=20, pois ainda é o valor de B é 20 e Y é 0;
}
