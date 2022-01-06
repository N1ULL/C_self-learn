#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>

int main()
{
    int a,b,c;//定义三只小猪体重
    printf("请输入三只小猪的体重:\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("a最重.\n");
        }
        else
        {
            printf("c最重.\n");
        }
    }
    else
    {
        if (b > c)
        {
            printf("b最重.\n");
        }
        else
        {
            printf("c最重.\n");
        }
    }

    return EXIT_SUCCESS;
}