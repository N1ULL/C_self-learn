#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
//ˮ�ɻ���
int main()
{
    int i = 100;
    do
    {
        //��λ��
        int a = i % 10;
        //ʮλ��
        int b = i / 10 % 10;
        //��λ��
        int c = i / 100;
        //�����ж�
        if(pow(a,3) + pow(b,3) + pow(c,3) ==i)
        {
            printf("%d\n", i);
        }
        i++;
    } while (i <= 999);
    return 0;
    
}