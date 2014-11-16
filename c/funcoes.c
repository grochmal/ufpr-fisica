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

int resolve_3(float *x, float *y,
	      float *z, float a1,
	      float a2, float a3,
	      float b1, float b2,
	      float b3,  float c1,
	      float c2, float c3,
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

void inverte(float *a, int b)
{
	if(b<0)
	{
		*a=1/(*a);
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

int raizes(float a, float b, float c, float *x_1, float *x_2)
{
	float d;
	if(raiz((b*b-4.0*a*c), 2, &d))
	{
		*x_1=(-b+d)/(2.0*a);
		*x_2=(-b-d)/(2.0*a);
		return 1;
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

int parabola(float x1, float y1,
	     float x2, float y2,
	     float x3, float y3,
	     float *a, float *b, float *c)
{
	if(resolve_3(a, b, c, (x1*x1), (x2*x2), (x3*x3),
		     x1, x2, x3, 1, 1, 1, y1, y2, y3))
	{
		return 1;
	}
	return 0;
}

