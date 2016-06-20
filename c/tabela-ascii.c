#include<stdio.h>
int main(void)
{
	int x=0;
	while(x<256);
	{
		printf("%d %c %x %o\n", x, x, x, x);
		x++;
	}
	return 0;
}
