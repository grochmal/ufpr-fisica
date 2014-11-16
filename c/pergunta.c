#include<stdio.h>

int pergunta(int *a)
{
	int n;
	n=0;
		if(*a=getchar()=='s')
		{
			if(*a=getchar()=='i')
			{
				if(*a=getchar()=='m')
				{
					while(*a=getchar()!='\n')
				{
					n=n+1;
				}
				if(n==0)
				{
					*a='s';
					return 0;
				}
				return 1;
			}
			return 1;
		}
			return 1;
		}
	if(*a=='n')
	{
		if(*a=getchar()=='a')
		{
			if(*a=getchar()=='o')
			{
				while(*a=getchar()!='\n')
				{
					n=n+1;
				}
				if(n==0)
				{

					*a='n';
					return 0;
				}
				return 1;
			}
			return 1;
		}
		return 1;
	}
	while(*a=getchar()!='\n')
	{
		n=n+1;
	}
	return 1;
}

int main(void)
{
	int a;
	printf("\n");
	printf("Programa para responder sim ou nao.\n");
	printf("\n");
	while(pergunta(&a))
	{
		 printf("\n");
		 printf("sim/nao?\n");
		 printf("\n");
	 }
	if(a=='s')
	{
		 printf("\n");
		 printf("Voce respondeu sim.\n");
	 }
	if(a=='n')
	{
		 printf("\n");
		 printf("Voce respondeu nao.\n");
	 }
	printf("\n");
	return 0;
}

