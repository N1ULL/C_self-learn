#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    //数组名是常量  不允许赋值
    //数组名是数组首元素地址
    int* p;
    p = arr;
    // printf("%p\n",p);
    // printf("%p\n",arr);

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",arr[i]);
        printf("%d\n",p[i]);
    }
    
    return EXIT_SUCCESS;
}