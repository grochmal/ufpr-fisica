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

int resolve_3(float *x, float *y, float *z,
	      float a1, float a2, float a3,
	      float b1, float b2, float b3,
	      float c1, float c2, float c3,
	      float d1, float d2, float d3)
{
	if(resolve_2(x, y, (a2*c1-a1*c2), (a3*c1-a1*c3),
			   (b2*c1-b1*c2), (b3*c1-b1*c3),
			   (d2*c1-d1*c2), (d3*c1-d1*c3)))
	{
		if(resolve_1(z, c1, (d1-a1*(*x)-b1*(*y))))
		{
			return 1;
		}
	}
	if(resolve_2(x, y, (a1*c2-a2*c1), (a3*c2-a2*c3),
			   (b1*c2-b2*c1), (b3*c2-b2*c3),
			   (d1*c2-d2*c1), (d3*c2-d2*c3)))
	{
		if(resolve_1(z, c2, (d2-a2*(*x)-b2*(*y))))
		{
			return 1;
		}
	}
	if(resolve_2(x, y, (a1*c3-a3*c1), (a2*c3-a3*c2),
			   (b1*c3-b3*c1), (b2*c3-b3*c2),
			   (d1*c3-d3*c1), (d2*c3-d3*c2)))
	{
		if(resolve_1(z, c3, (d3-a3*(*x)-b3*(*y))))
		{
			return 1;
		}
	}
	return 0;
}

int main(void)
{
	float a1;
	float a2;
	float a3;
	float b1;
	float b2;
	float b3;
	float c1;
	float c2;
	float c3;
	float d1;
	float d2;
	float d3;
	float x;
	float y;
	float z;
	printf("\n");
	printf("Este e o resolve 3x3,");
	printf("digite as constantes na ordem mostrada:\n");
	printf("a1x\t");
	printf("+b1y\t");
	printf("+c1z\t");
	printf("=d1x\n");
	printf("a2x\t");
	printf("+b2y\t");
	printf("+c2z\t");
	printf("=d1\n");
	printf("a3x\t");
	printf("+b3y\t");
	printf("+c3z\t");
	printf("=d3\n");
	printf("a1: ");
	scanf("%f", &a1);
	printf("a2: ");
	scanf("%f", &a2);
	printf("a3: ");
	scanf("%f", &a3);
	printf("b1: ");
	scanf("%f", &b1);
	printf("b2: ");
	scanf("%f", &b2);
	printf("b3: ");
	scanf("%f", &b3);
	printf("c1: ");
	scanf("%f", &c1);
	printf("c2: ");
	scanf("%f", &c2);
	printf("c3: ");
	scanf("%f", &c3);
	printf("d1: ");
	scanf("%f", &d1);
	printf("d2: ");
	scanf("%f", &d2);
	printf("d3: ");
	scanf("%f", &d3);
	if(resolve_3(&x, &y, &z,
		     a1, a2, a3, b1, b2, b3, c1, c2, c3, d1, d2, d3))
	{
		printf("\n");
		printf("x: ");
		printf("%f\t", x);
		printf("y: ");
		printf("%f\t", y);
		printf("z: ");
		printf("%f\n", z);
		printf("\n");
		return 0;
	}
	printf("\n");
	printf("Nao ha solucao real.\n");
	printf("\n");
	return 0;
}

