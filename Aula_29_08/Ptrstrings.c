#include <stdio.h>
#include <stdlib.h>

int main()
{
	char s1[] = "Sauda��es!";
	char *s2 = "Sauda��es!";
	
	printf("%p\n", s1);
	printf("%p\n", s2);
	
	/**s1++; Erro. N�o podemos incrementar uma constante*/
	s2++; /*OK*/
	
	printf("%s\n", s2); /*Imprime: sauda��es*/
	system("PAUSE");
	return 0;
}

