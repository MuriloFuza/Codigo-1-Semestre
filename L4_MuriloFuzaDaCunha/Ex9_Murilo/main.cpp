#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*	Estrutura de Dados 1
Lista - 4 EX: 9
Aluno: Murilo Fuza da Cunha
Compilador: Code::Blocks 17.12
Sistema Operacional: Windows

9 - O programa abaixo l� 10 fichas de empregados de uma empresa. Cada ficha possui o seguinte formato
Observa��es:
- O campo DATAEMP deve ser dividido em 3 vari�veis: dia, m�s, ano;
- O campo NUMEMP � do tipo int;
- O campo NOMEMP, ENDERE�O � do tipo char;
- O campo SAL�RIO � do tipo float.
*/
typedef struct{
    int numemp;
    char nomemp[20], endereco[20];
    int dia, mes, ano;
    float salario;
}ficha;

int main(){
ficha vfichas[10];
int i;
    for (i=0;i<10;i++){
        printf("\nentre com o numero do empregado ");
            scanf("%d",&vfichas[i].numemp);
        printf("\nentre com o nome do empregado ");
            fflush(stdin);
            gets(vfichas[i].nomemp);
        printf("\nentre com o endereco do empregado ");
            fflush(stdin);
            gets(vfichas[i].endereco);
        printf("\nentre com o dia da admissao ");
            scanf("%d",&vfichas[i].dia);
        printf("\nentre com o mes da admissao ");
            scanf("%d",&vfichas[i].mes);
        printf("\nentre com o ano da admissao ");
            scanf("%d",&vfichas[i].ano);
            printf("\nentre com o salario do empregado ");
        scanf("%f",&vfichas[i].salario);
    }//end for
    for (i=0;i<10;i++){
        printf("\n");
        printf("%d\n",vfichas[i].numemp);
        printf("%s\n",vfichas[i].nomemp);
        printf("%s\n",vfichas[i].endereco);
        printf("%d\n",vfichas[i].dia);
        printf("%d\n",vfichas[i].mes);
        printf("%d\n",vfichas[i].ano);
        printf("%.2f\n",vfichas[i].salario);
    } // end for

}
