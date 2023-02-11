#include<stdio.h>

int count = 1;
void hannuota(int n,char* a,char* b,char* c)
{
	if (n==1)
	{
		printf("%d:%s-->%s\n", count, a, c);
		count++;
	}
	else
	{
		hannuota(n - 1, a, c, b);
		printf("%d:%s-->%s\n",count,a,c);
		count++;
		hannuota(n - 1, b, a, c);
	}
}

int main()
{
	int n=0;
	char a[] = "AÖù";
	char b[] = "BÖù";
	char c[] = "CÖù";
	scanf("%d",&n);
	hannuota(n, a, b, c);

	return 0;
}