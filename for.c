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
            //在循环语句中遇到break表示跳出循环
            break;
        }
        printf("%d\n", i);
        i++;
    }
    return EXIT_SUCCESS;
}