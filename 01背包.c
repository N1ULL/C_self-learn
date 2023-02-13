#include<stdio.h>

int max(int a, int b)
{
	if (a>=b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int main()
{
	int n, t;
	int bag[200][200] = {0};
	scanf("%d %d", &n, &t);
	int w[10] = { 0 };
	int v[10] = { 0 };
	for (int k = 1; k <= n; k++)
	{
		scanf("%d %d", &w[k], &v[k]);
	}
	for (int i = 1; i <= n; i++)
	{
		for(int j = t; j >= 0; j--)
		{
			if (w[i]>j)
			{
				bag[i][j] = bag[i - 1][j];
			}
			else
			{
				bag[i][j] = max(bag[i - 1][j], (bag[i - 1][j - w[i]]) + v[i]);
			}
		}
	}
	printf("%d", bag[n][t]);
}