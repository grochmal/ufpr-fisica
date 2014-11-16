#include<stdio.h>

int main(void)
{
	int i;
	i=0;
	while(i!=256)
	{
		scanf("%d", &i);
		printf("decimal " );
		printf("%d", i);
		printf(" ");
		printf("caractere ");
		printf("%c", i);
		printf(" ");
		printf("hexadecimal ");
		printf("%x",i);
		printf(" ");
		printf("octal ");
		printf("%o\n", i);
	}
	return 0;
}

