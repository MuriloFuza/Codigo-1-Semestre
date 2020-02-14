#include <stdio.h>
#include <stdlib.h>
#include<math.h>
/* Estrutura de Dados 1
Lista - 4 EX: 5
Aluno: Murilo Fuza da Cunha
Compilador: Code::Blocks 17.12
Sistema Operacional: Windows

5- Faça um programa com uma sub-rotina (função) que calcule X elevado à Y = XY
. Leia 2 valores de X e Y e exiba o
resultado da chamada da sub-rotina na tela. Exemplo: 2 elevado à 3 é igual à 2*2*2 = 8. A função deve ser chamada
no programa principal, o qual deve receber o valor calculado pela função e exibir o resultado.
int main()
*/
void elevado(int elem, int elev){
    int resul = pow(elem,elev);
    //Professora não sei como exibir isso  2*2*2 e não posso ir as quartas feiras falar com
    //vc pois tenho serviços de casa e coisas na rua para resolver pois moro sozinho
    printf("%d elevado a %d eh igual a %d^%d = %d\n",elem,elev,elem,elev,resul);

}
int main(){
    int elem,elev = 0;
    printf("Insira o numero a ser elevado: ");
    scanf("%d",&elem);
    printf("Insira o numero da elevacao: ");
    scanf("%d",&elev);
    elevado(elem,elev);

    system("pause");
}
