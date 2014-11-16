#include<stdio.h>

int Strlen(char s[])
{
	char *p;
	p=s;
	while(*p!='\0')
	{
		p++;
	}
	return p-s;
}

char *reverte(char s[])
{
	char c;
	int n, div, i=0;
	n=Strlen(s);
	div=n/2;
	n--;
	while(div>0)
	{
		c=s[i];
		s[i]=s[n-i];
		s[n-i]=c;
		i++;
		div--;
	}
	return s;
}

int main(void)
{
	char str[81];
	char *p;
	fgets(str, 10, stdin);
	p=reverte(str);
	p++;
	printf("%s\n", p);
	return 0;
}

