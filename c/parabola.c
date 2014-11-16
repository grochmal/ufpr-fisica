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

int resolve_2(float *x, float *y, float a1, float a2,
	      float b1, float b2, float c1, float c2)
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

int parabola(float x1, float y1, float x2,
	     float y2, float x3, float y3,
	     float *a, float *b, float *c)
{
	if(resolve_3(a, b, c, (x1*x1), (x2*x2), (x3*x3),
			       x1, x2, x3, 1, 1, 1, y1, y2, y3))
	{
		return 1;
	}
	return 0;
}

int main(void)
{
	float x1;
	float x2;
	float x3;
	float y1;
	float y2;
	float y3;
	float a;
	float b;
	float c;
	printf("\n");
	printf("Este programa lhe dara a equacao da parabola passando\n");
	printf("pelos pontos indicados.\n");
	printf("x1: ");
	scanf("%f", &x1);
	printf("x2: ");
	scanf("%f", &x2);
	printf("x3: ");
	scanf("%f", &x3);
	printf("y1: ");
	scanf("%f", &y1);
	printf("y2: ");
	scanf("%f", &y2);
	printf("y3: ");
	scanf("%f", &y3);
	printf("\n");
	if(parabola(x1, x2, x3, y1, y2, y3, &a, &b, &c))
	{
		printf("%f", a);
		printf("x?");
		if(b>=0)
		{
			printf("+");
		}
		printf("%f", b);
		printf("x");
		if(c>=0)
		{
			printf("+");
		}
		printf("%f", c);
		printf("=y\n");
		printf("\n");
		return 0;
	}
	printf("Nao e parabola.\n");
	printf("\n");
	return 0;
}

