#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>

int main()
{
    int a,b,c;//������ֻС������
    printf("��������ֻС�������:\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("a����.\n");
        }
        else
        {
            printf("c����.\n");
        }
    }
    else
    {
        if (b > c)
        {
            printf("b����.\n");
        }
        else
        {
            printf("c����.\n");
        }
    }

    return EXIT_SUCCESS;
}