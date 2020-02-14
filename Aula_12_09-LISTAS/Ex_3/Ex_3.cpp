#include "racional.cpp"
#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int op, N, D;
    Racional R1, R2, r;
    do{
        printf("Operacoes com Racionais\n\n");
        printf("1-Define\n");
        printf("2-Soma\n");
        printf("3-Multiplica\n");
        printf("4-Iguais\n");
        printf("5-Sair\n\n");
        printf("Digite a opcao: ");
        scanf("%d",&op);
            switch (op)
            {
            case 1://define
                    
                    printf("Insira o numerador: ");
                    scanf("%d",&N);
                    printf("Insira o denominador: ");
                    scanf("%d",&D);

                    R1 = Define(N,D);

                    printf("Insira o numerador: ");
                    scanf("%d",&N);
                    printf("Insira o denominador: ");
                    scanf("%d",&D);

                    R2 = Define(N,D);
                    printf("\nNumeros definidos\n");
                    system("pause");
                    system("cls");
                break;
            
            case 2://SOMA
               exibe(R1);
               printf(" + ");
               exibe(R2);
               r = Soma(R1,R2);
               printf("=");
               exibe(r);
               system("pause");
                system("cls");
                break;

            case 3://Multiplica
                exibe(R1);
                printf(" * ");
                exibe(R2);
                r = Multiplica(R1,R2);
                printf("=");
                exibe(r);
                system("pause");
                system("cls");
                break;            
            

            case 4://Iguais
                if(TestaIgualdade(R1, R2)) printf("iguais!\n");
                else printf("Diferentes\n");
                system("pause");
                system("cls");
                break;            
            
            case 5:
            printf("Saindo!\n");
            break;
            default:
            printf("\n Opcao invalidade!\n");
            system("pause");
            system("cls");
            break;
            }
    }while (op!=5);
    
    return 0;
}