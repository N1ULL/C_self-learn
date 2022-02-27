#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

int main0201()
{
    
    //数组定义
    //数据类型 数组名[元素个数]={值1，值2，值3}
    int arr[10] = {9,4,2,1,8,5,3,6,10,7};

    //数组下标 数组名[下标]
    //数组下标从0开始的数到数组元素个数-1

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }
    
    // printf("%d\n", arr[0]);
    // printf("%d\n", arr[1]);
    return EXIT_SUCCESS;
}
int main0202(void)
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    //数组元素参与计算
    arr[3] = arr[5];
    arr[2] = arr[3] * 2;

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
    
}
int main(void)
{
    //数组在内存中的存储方式和大小
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    //下标为0的元素地址
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%p\n", &arr[i]);
    // }
    printf("%d\n", sizeof(arr));
    printf("%d\n", sizeof(arr[0]));
    return 0;
    
}