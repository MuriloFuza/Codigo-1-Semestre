#include<stdio.h>
/*
Programa precisa ser modificado para realizar a soma
para o mesmo é apenas modificar as matrizes;
*/
int main(){
    int matriz[2][3] = {1,2,1,3,4,1};
    int mat2[3][2] = {1,2,1,3,2,1};
    //int matsoma[tf][tf] ;
    int matmulti[2][2];
    int i,j,count;
     int aux = 0;
    count = 1;
    int n = 2, p = 3, m = 2;
/*insercao
    for(i=0;i<tf;i++){
        for(j=0;j<tf;j++){
            matriz[i][j] = count;
            count++;
    }
}

for(i=0;i<tf;i++){
        for(j=0;j<tf;j++){
            mat2[i][j] = count;
            count++;
    }
}
fim insercao
*/
//aps das matrizes
printf("\nMatriz 1:\n");
for(i=0;i<n;i++){
        for(j=0;j<p;j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
printf("\nMatriz 2:\n");
    for(i=0;i<p;i++){
        for(j=0;j<n;j++){
            printf("%d ",mat2[i][j]);
        }
        printf("\n");
    }
//fim da aps das matrizes 1 e 2

    printf("\n\n");
/*soma das matrizes 1 e 2
     printf("Soma:\n ");
     for(i=0;i<tf;i++){
        for(j=0;j<tf;j++){
           matsoma[i][j]  = matriz[i][j] +mat2[i][j];
        }
    }

    for(i=0;i<tf;i++){
        for(j=0;j<tf;j++){
            printf("%d ",matsoma[i][j]);
        }
        printf("\n");
    }
    fim da soma das matrizes 1 e 2
*/

//multiplicação das matrizes 1 e 2
   for(i=0;i<n;i++){
        for(j=0;j<m;j++){
                matmulti[i][j]  = 0;
            for(int k = 0; k < p;k++){
                matmulti[i][j] = matmulti[i][j] + (matriz[i][k] *mat2[k][j]);
            }
        }
    }
printf("\n\nMultiplicacao:\n ");
      for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",matmulti[i][j]);
        }
        printf("\n");
    }

//fim da multiplicação
}


