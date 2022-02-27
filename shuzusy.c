#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

int main0301()
{
    // int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    // int arr[] = {1,2,3,4,5,6,7,8,9,10};
    // int arr[10] = {1,2,3,4,5};
    // int arr[10] = {0};
    // int arr[10] = {1};
    int arr[10];

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        printf("%d\n", arr[i]);
    }
    

    return EXIT_SUCCESS;
}
int main(void)
{
    //数组元素必须是常量或者常量表达式
    //数组必须预先知道大小 动态数组-》开辟堆空间
    int arr[10];
    
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        //注意数组下标不要越界
        printf("%d\n", arr[i]);
    }
    return 0;
    
    
}