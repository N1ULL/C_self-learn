#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
//猜数字游戏
//产生随机数
//1.导入头文件  time.h
//2.添加随机数种子
//3.获取随机数
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