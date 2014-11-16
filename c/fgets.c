#include<stdio.h>
char *le_vetor_com_espacos(char *c)
{
	char *u;
	u=c;
	u=u+1;
	return u;
}
int main()
{
	char c[81];
	fgets(c,80,stdin);
	printf("%s", le_vetor_com_espacos(c));
	return 0;
}

