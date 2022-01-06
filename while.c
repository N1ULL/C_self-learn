#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>

int main11()
{
    // while (表达式)
   int i = 0;
   //防止死循环出现
   while (i < 10)
   {
       printf("%d\n", i);
       i++;
   }
   
   return EXIT_SUCCESS; 
}

//凡是带7或者7的倍数就敲桌子，否则正常输出
int main(void)
{
    int i = 1;
    while (i <= 100)
    {
        if(i % 7 == 0 || i % 10 ==7 || i/10 == 7)
        {
            printf("敲桌子\n");
        }
        else
        {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
    
}