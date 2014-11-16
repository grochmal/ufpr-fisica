#include<stdio.h>
int main(void)
{
	float x=0.0, y;
	while(x<=600)
	{
		printf("%.0f\t", x);
		y=1.0*0.000011*x+1.0;
		printf("%.4f\t\t", y);
		y=0.392699081*3.0*0.000011*x+0.392699081;
		printf("%f\n", y);
		x=x+100;
	}
	return 0;
}

