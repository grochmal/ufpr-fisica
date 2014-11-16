#include<stdio.h>
#define N 3
#define M 3

float max_linha(float m[][N], int i)
{
	int j=0;
	float maxi;
	maxi=m[i][j];
	while(j<(N-1))
	{
		j++;
		if(maxi<m[i][j])
		{
			maxi=m[i][j];
		}
	}
	return maxi;
}

float max(float m[][N])
{
	int i;
	float maxi, ret;
	maxi=max_linha(m, i);
	while(i<(M-1))
	{
		i++;
		if(maxi<(ret=max_linha(m, i)))
		{
			maxi=ret;
		}
	}
	return maxi;
}

int main(void)
{
	float m[M][N];
	int i=0, j;
	while(i<M)
	{
		j=0;
		while(j<N)
		{
			scanf("%f", &m[i][j]);
			j++;
		}
		i++;
	}
	printf("%f\n", max(m));
	return 0;
}

