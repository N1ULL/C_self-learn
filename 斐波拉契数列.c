#include<stdio.h>

int rabbit(int n)
{
	int num = 1;
	if (n<=0)
	{
		return 0;
	}
	if (n<=2)
	{
		return num;
	}
	else
	{
		num = rabbit(n - 1) + rabbit(n - 2);
	}
	return num;
}
int main()
{
	int n;
	scanf("%d", &n);
	int num=rabbit(n);
	printf("�·ݣ�%d ��������%d\n", n, num);
}