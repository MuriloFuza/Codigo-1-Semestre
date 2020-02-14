#include <stdio.h>
//FUNÇÃO RECURSIVA || FUNÇÃO ONDE ELA CHAMA ELA MESMA ||
 int fat(int n){
     int f;
    printf("\nChamando fatorial de: %d ",n);
    if(n<=0){
        return 1;
    }else{
        f = (n*fat(n-1));
    }
    printf("\nFeita a multiplicacao por: %d ",n);
     return f;
}

int main(void){
         int n;
        //VALOR A SER ENVIADO PARA FATORIAÇÃO
        printf("Digite o valor de N: ");
        scanf("%d",&n);
        //Apresentando o fatorial
        printf("\n\nFatoria de %d = %d",n,fat(n));
}