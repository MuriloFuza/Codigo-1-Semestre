#include <stdio.h>
#include <stdlib.h>
int main(){
	int **p; // 1 "*" = 2 n�veis = 2 dimens�es
	int i, j, N=2;
	
	/*alocando*/
	p = (int **) malloc(N*sizeof(int *));
	for (i=0; i<N; i++){
		p[i] = (int *) malloc(N*sizeof(int));
		for (j=0; j<N; j++)
			scanf("%d", &p[i][j]);
	}
	
	/*Desalocando*/
	for (i=0; i<N; i++){
      free(p[i]);
 	}
 	free(p);
	
	system("pause");
	return 0;
}
