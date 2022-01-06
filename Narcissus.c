#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
//水仙花数
int main()
{
    int i = 100;
    do
    {
        //个位数
        int a = i % 10;
        //十位数
        int b = i / 10 % 10;
        //百位数
        int c = i / 100;
        //条件判断
        if(pow(a,3) + pow(b,3) + pow(c,3) ==i)
        {
            printf("%d\n", i);
        }
        i++;
    } while (i <= 999);
    return 0;
    
}