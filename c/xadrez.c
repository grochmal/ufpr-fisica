#include<stdio.h>

int main(void)
{
	int x;
	int y;
	int i;
	x=1;
	y=1;
	i=219;
	while(x<9)
	{
		while(y<9)
		{
			if((x+y)%2==0)
			{
				printf("%c", i);
				printf("%c", i);
			}
			else
			{
				printf("  ");
			}
			y++;
		}
		y=1;
		printf("\n");
		x++;
	}
	return 0;
}

