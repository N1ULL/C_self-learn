#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>

int main11()
{
    // while (���ʽ)
   int i = 0;
   //��ֹ��ѭ������
   while (i < 10)
   {
       printf("%d\n", i);
       i++;
   }
   
   return EXIT_SUCCESS; 
}

//���Ǵ�7����7�ı����������ӣ������������
int main(void)
{
    int i = 1;
    while (i <= 100)
    {
        if(i % 7 == 0 || i % 10 ==7 || i/10 == 7)
        {
            printf("������\n");
        }
        else
        {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
    
}