#include<time.h>
unsigned long int prox = 1;
int rand(void);
void srand(unsigned int sement);

int main(void)
{
	int i, n;
	srand(time(NULL));
	for(i=0; i<21; i++)
	{
		n=rand();
		if(n<0)
		{
			n=-n;
		}
		printf("%d\n", (n)%20+1);
	}
	return 0;
}

int rand(void)
{
	prox = prox * 1103515245 + 12345;
	return (unsigned int)(prox/65536) % 32768;
}

void srand(unsigned int sement)
{
	prox = sement;
}

