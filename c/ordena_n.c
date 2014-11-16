#include<stdio.h>

void ordena_2(float *a, float *b)
{
	if(a>b)
	{
		float c;
		c=*a;
		*a=*b;
		*b=c;
	}
	return;
}

void ordena_3(float *a, float *b, float *c)
{
	ordena_2(a, b);
	ordena_2(b, c);
	ordena_2(a, b);
	return;
}

void ordena_4(float *a, float *b, float *c, float *d)
{
	ordena_3(a, b, c);
	ordena_3(b, c, d);
	ordena_3(a, b, d);
	return;
}

void ordena_5(float *a, float *b, float *c, float *d, float *e)
{
	ordena_4(a, b, c, d);
	ordena_4(b, c, d, e);
	ordena_4(a, b, c, d);
	return;
}

void ordena_6(float *a, float *b, float *c, float *d, float *e, float *f)
{
	ordena_5(a, b, c, d, e);
	ordena_5(b, c, d, e, f);
	ordena_5(a, b, c, d, e);
	return;
}

void ordena_7(float *a, float *b, float *c,
	      float *d, float *e, float *f, float *g)
{
	ordena_6(a, b, c, d, e, f);
	ordena_6(b, c, d, e, f, g);
	ordena_6(a, b, c, d, e, f);
	return;
}

void ordena_8(float *a, float *b, float *c, float *d,
	      float *e, float *f, float *g, float *h)
{
	ordena_7(a, b, c, d, e, f, g);
	ordena_7(b, c, d, e, f, g, h);
	ordena_7(a, b, c, d, e, f, g);
	return;
}

void ordena_9(float *a, float *b, float *c, float *d,
	      float *e, float *f, float *g, float *h, float *i)
{
	ordena_8(a, b, c, d, e, f, g, h);
	ordena_8(b, c, d, e, f, g, h, i);
	ordena_8(a, b, c, d, e, f, g, h);
	return;
}

void ordena_10(float *a, float *b, float *c, float *d, float *e,
	       float *f, float *g, float *h, float *i, float *j)
{
	ordena_9(a, b, c, d, e, f, g, h, i);
	ordena_9(b, c, d, e, f, g, h, i, j);
	ordena_9(a, b, c, d, e, f, g, h, i);
	return;
}

void ordena_11(float *a, float *b, float *c, float *d, float *e, float *f,
	       float *g, float *h, float *i, float *j, float *k)
{
	ordena_10(a, b, c, d, e, f, g, h, i, j);
	ordena_10(b, c, d, e, f, g, h, i, j, k);
	ordena_10(a, b, c, d, e, f, g, h, i, j);
	return;
}

int main(void)
{
	float a;
	float b;
	float c;
	float d;
	float e;
	float f;
	float g;
	float h;
	float i;
	float j;
	float k;
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	scanf("%f", &d);
	scanf("%f", &e);
	scanf("%f", &f);
	scanf("%f", &g);
	scanf("%f", &h);
	scanf("%f", &i);
	scanf("%f", &j);
	scanf("%f", &k);
	ordena_11(&a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k);
	printf("%f\n", a);
	printf("%f\n", b);
	printf("%f\n", c);
	printf("%f\n", d);
	printf("%f\n", e);
	printf("%f\n", f);
	printf("%f\n", g);
	printf("%f\n", h);
	printf("%f\n", i);
	printf("%f\n", j);
	printf("%f\n", k);
	return 0;
}

