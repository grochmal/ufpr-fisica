#include<stdio.h>

int resolve_1(float *x, float a, float b)
{
	if(a==0)
	{
		return 0;
	}
	*x=b/a;
	return 1;
}

int resolve_2(float *x, float *y,
	      float a1, float a2,
	      float b1, float b2,
	      float c1, float c2)
{
	if(resolve_1(x, (a2*b1-a1*b2), (b1*c2-b2*c1)))
	{
		if(resolve_1(y, b1, (c1-a1*(*x))))
		{
			return 1;
		}
		if(resolve_1(y, b2, (c2-a2*(*x))))
		{
			return 1;
		}
	}
	return 0;
}

int reta(float x1, float y1, float x2, float y2, float *a, float *b)
{
	if(x1==x2 && y1==y2)
	{
		return 0;
	}
	if(resolve_2(a, b, x1, x2, 1.0, 1.0, y1, y2))
	{
		return 1;
	}
	return 0;
}

int main(void)
{
	float x1;
	float x2;
	float y1;
	float y2;
	float a;
	float b;
	printf("\n");
	printf("Este programa deduz a equacao de funcao linear.\n");
	printf("Coloque os pontos(2) pelos quais deseja que a reta passe:\n");
	printf("x1: ");
	scanf("%f", &x1);
	printf("x2: ");
	scanf("%f", &x2);
	printf("y1: ");
	scanf("%f", &y1);
	printf("y2: ");
	scanf("%f", &y2);
	if(reta(x1, y1, x2, y2, &a, &b))
	{
		printf("\n");
		printf("A equaco da reta e a seguinte: ");
		printf("%f", a);
		printf("x");
		if(b>=0)
		{
			printf("+");
		}
		printf("%f", b);
		printf("=y\n");
		printf("\n");
		return 1;
	}
	printf("\n");
	printf("Nao e funcao.\n");
	printf("\n");
	return 0;
}

