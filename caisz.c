#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
//��������Ϸ
//���������
//1.����ͷ�ļ�  time.h
//2.������������
//3.��ȡ�����
int main()
{
    srand((unsigned int)time(NULL));

    // int value = rand()%10;//0~9
    // for (int i = 0; i < 10; i++)
    // {
    //     int value =rand() % 100;
    //     printf("%d\n", value);
    // }
    int value = rand() % 100;
    int num;
    for (;;)
    {
        printf("input:\n");
        scanf("%d", &num);
        if (value > num)
        {
            printf("small\n");
        }
        else if (value < num)
        {
            printf("big\n");
        }
        else
        {
            printf("right\n");
            break;
        }
        
    }
    return 0;

}