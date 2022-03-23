#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    // time_t timer = time(NULL);
    // srand((size_t)timer);
    //添加随机数种子
    srand((size_t)time(NULL));
    
    for (int i = 0; i < 100; i++)
    {
        // printf("%d\n", rand()%100);
        printf("%d\n", rand()%51+50); //50-101
    }
    

    return 0;
}