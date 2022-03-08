#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main()
{
    //定义一个数组 存储五名学生三门成绩 arr[5][3]
    //求出每名学生的总成绩 平均成绩
    //求出每门学科的总成绩 平均成绩
    int arr[5][3];

    //获取学生成绩
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }
    //打印学生成绩
    for (int i = 0; i < 5; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
            // printf("%d", arr[i][j]);
        }
        printf("第%d名学生的总成绩为:%d\t 平均成绩为:%d\n", i + 1, sum, sum / 3);
        
    }
    return EXIT_SUCCESS;
}