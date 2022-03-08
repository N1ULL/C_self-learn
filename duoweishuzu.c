#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main()
{
    //一维数组定义
    //数据类型 数组名[元素个数]
    //二位数组定义
    //数据类型 数组名[行][列]
    //三维数组
    //数据类型 数组名[层][行][列]

    int arr[2][3][4]=
    {
        {
            {1,2,3,4},
            {2,3,4,5},
            {3,4,5,6}
        },
        {
            {4,5,6,7},
            {5,6,7,8},
            {6,7,8,9}
        }
    };
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                printf("%d\t", arr[i][j][k]);
            }
            printf("\n");
            
        }
        
    }
    

    printf("二位数组大小:%d\n", sizeof(arr));//层*行*列*sizeof(数据类型)
    printf("二位数组一层大小:%d\n", sizeof(arr[0]));
    printf("二位数组一行大小:%d\n", sizeof(arr[0][0]));
    printf("二位数组元素大小:%d\n", sizeof(arr[0][0][0]));

    printf("二位数组层数:%d\n", sizeof(arr) / sizeof(arr[0]));
    printf("二位数组行数:%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));
    printf("二位数组列数:%d\n", sizeof(arr[0][0]) / sizeof(arr[0][0][0]));
    return EXIT_SUCCESS;
}