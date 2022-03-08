#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main()
{
    //数据类型 数组名[元素个数]={值1, 值2}
    //数据类型 数组名[行][列]=
    //{
    //{值1, 值2}
    //{值3, 值4}
   //}
    int arr[2][3]=
    {
        {1,2,3},
        {4,5,6}
    };

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
        
    }
    
    printf("二位数组大小:%d\n", sizeof(arr));//行*列*sizeof(数据类型)
    printf("二位数组一行大小:%d\n", sizeof(arr[0]));
    printf("二位数组元素大小:%d\n", sizeof(arr[0][0]));

    printf("二位数组行数:%d\n", sizeof(arr) / sizeof(arr[0]));
    printf("二位数组列数:%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));
    //二位数组首地址
    // printf("%p\n", arr);
    // printf("%p\n", arr[0]);
    // printf("%p\n", &arr[0][0]);

    // printf("%p\n", arr[1]);
    return EXIT_SUCCESS;
}