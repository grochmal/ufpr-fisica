#include<stdio.h>

void inverte(float *a, int b)
{
	if(b<0)
	{
		*a=(1/(*a));
	}
	return;
}

int raiz(float a, int n, float *b)
{
	int w;
	float x;
	int y;
	float z;
	w=1;
	if(n<0)
	{
		n=-n;
		w=-w;
	}
	if(n==0)
	{
		return 0;
	}
	if(a==0)
	{
		*b=0;
		return 1;
	}
	if(a==1)
		{
		*b=1;
		return 1;
		}
	if(a>0 && a<1)
	{
		x=0.0;
		while((z*x)<a)
		{
			x=x+0.000001;
			y=1;
			z=1.0;
			while(n>y)
			{
				z=z*x;
				y=y+1;
			}
		}
		inverte(&x, w);
		if(z*x==a)
		{
			*b=x;
			return 1;
		}
		x=x-0.000001;
		*b=x;
		return 1;
	}
	if(a>1)
	{
		x=1.0;
		while((z*x)<a)
		{
			x=x+0.000001;
			y=1;
			z=1.0;
			while(n>y)
			{
				z=z*x;
				y=y+1;
			}
		}
		inverte(&x, w);
		if(z*x==a)
		{
			*b=x;
			return 1;
		}
		x=x-0.000001;
		*b=x;
		return 1;
	}
	return 0;
}

int main(void)
{
	float a;
	float b;
	int n;
	printf("\n");
	printf("Este programa resolve raizes inteiras de qualquer numero: \n");
	printf("Digite o numero a ser retirada a raiz: ");
	scanf("%f", &a);
	printf("Agora digite o grau da raiz: ");
	scanf("%d", &n);
	if(raiz(a, n, &b))
	{
		printf("\n");
		printf("A raiz desejada e: ");
		printf("%f\n", b);
		printf("\n");
		return 0;
	}
	printf("\n");
	printf("E impossivel realizar o calculo desejado.\n");
	printf("\n");
	return 0;
}

