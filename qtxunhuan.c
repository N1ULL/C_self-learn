#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <windows.h>

int main010()
{
    //���ִ��һ�Σ��ڲ�ִ��һ������
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("i=%d,j=%d\n", i, j);
        }
        
    }
    return EXIT_SUCCESS;
}
//��ʱ��
int main()
{
    for (int i = 0; i < 24; i++)
    {
        for (int j = 0; j < 60; j++)
        {
            for (int k = 0; k < 60; k++)
            {
                //����
                system("cls");
                printf("%02d:%02d:%02d\n", i, j, k);
                Sleep(950);
            }
            
        }
        
    }
    
}