#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
// #define MAX(a,b) (a)>(b)?(a):(b)
//��Ŀ�����
//���ʽ1?���ʽ2:���ʽ3
//���Ȼ������ʽ1��ֵ�������ǳ������ǲ�������������ʽ1������
//��ô�����Ŀ����������ֵ�ؾ��Ǳ��ʽ2��ֵ������Ҳ���Ǳ��ʽ1���������������Ŀ����������ֵ���Ǳ��ʽ3��ֵ��

// int main()
// {
//     int a = 10;
//     int b = 20;
//     printf("%d\n", MAX(a,b));
//     return 0;
// }
int main()
{
    int a = 10;
    int b = 20;

    printf("%d", a > b ? a : b);

    // if (a > b)
    // {
    //     printf("a��\n");
    // }
    // else
    // {
    //     printf("b��\n");
    // }
    return EXIT_SUCCESS;
}