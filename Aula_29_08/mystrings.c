/*Prot�tipos*/
int strlen(char *);
void strcpy(char *, char *);
int strcmp(char *, char *);

/*Listagem das fun��es*/
/*Retorna o tamanho da cadeia*/
int strlen(char *s)
{
	int i=0;
	while(*(s++)) i++;
	return i;
}

/*Copia a cadeia origem na cadeia destino*/
void strcpy(char *dest, char *orig)
{
	while(*(dest++) = *(orig++));
}

/*Compara a cadeia s com a cadeia t
 * Retorna a diferen�a ASCII:
 *		um n�mero positivo se s>t
 *		um n�mero negativo se s<t
 *		zero se s == t
 */
int strcmp(char *s, char *t)
{
	while(*s==*t && *s)
	{
		s++;
		t++;
	}
	return *s-*t
}
