#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*	Estrutura de Dados 1
Lista - 4 EX: 4
Aluno: Murilo Fuza da Cunha
Compilador: Code::Blocks 17.12
Sistema Operacional: Windows

4 � Observe o programa abaixo:
Altere o programa para mostrar:l
a) O tamanho da frase;
b) A quantidade de espa�os em branco.
*/
int main(void)
{
int  tams, num_vogal = 0;
char *frase, *pont;

    printf("Entre com o tamanho maximo da frase: ");
    scanf("%d", &tams);

/*Aloca uma string com o tamanho tams */
        frase = (char*)malloc(tams*sizeof(char));
        if(frase == NULL){
            printf("Nao conseguiu alocar o espaco informado");
            exit(0);
        }

/*faz a leitura da string frase*/
    printf("Entre com a frase:\n");
    getchar(); /*elimina o \n */
    gets(frase);
    pont = frase;
        while(*pont){
            if(*pont == 'a' || *pont == 'e' || *pont == 'i'
                ||*pont == 'o' || *pont == 'u')
                num_vogal++;
                pont++;
        }
     int tam = strlen(frase);
    printf("A frase tem %d vogais.\n", num_vogal);
    printf("O tamanho da frase eh de %d .\n",tam);
    printf("Espacos em branco da alocacao de tamanho da frase: %d.\n\n",tams - tam);

    system("pause");
}
