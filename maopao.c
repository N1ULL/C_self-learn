#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

int main()
{
    int arr[10] = {9,1,5,7,2,10,8,4,6,3};
    //外层控制行
    //外层执行元素个数-1
    for (int i = 0; i < 9; i++)
    {
        //内层控制列
        //内层执行元素个数-1-执行次数
        for (int j = 0; j < 9 - i; j++)
        {
            //比较两个元素 满足条件交换
            //通过符号控制排序的方式
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            
        }
        
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }
    
    

    return EXIT_SUCCESS;
}