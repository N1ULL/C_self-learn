#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
int main()
{
    int i = 0;
    for (;;)
    {
        if (i > 10)
        {
            //��ѭ�����������break��ʾ����ѭ��
            break;
        }
        printf("%d\n", i);
        i++;
    }
    return EXIT_SUCCESS;
}