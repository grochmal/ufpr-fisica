#include<stdio.h>
#define N 10

int main(void)
{
	int i;
	int n;
	char a[N];
	int b[N];
	scanf("%d", &n);
	i=0;
	while(i<n)
	{
		scanf("%c", &a[i]);
		scanf("%d", &b[i]);
		i=i+1;
	}
	i=0;
	while(i>=0)
	{
		printf("%c\n", a[i]);
		i=b[i];
	}
	return 0;
}

