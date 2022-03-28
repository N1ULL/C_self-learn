#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>

//无参函数
int fun01()
{
    return rand() % 10;
}
int main0401()
{
    srand((unsigned int)time(NULL));
    fun01();
    return EXIT_SUCCESS;
}
//冒泡排序的函数板 有参函数
void BubbleSort(int arr[],int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len-1-i; j++)
        {
            if (arr[j] > arr [j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        
    }
    
}
int main()
{
    int arr[] = {9,1,7,4,2,10,3,8,6,5};
    BubbleSort(arr,sizeof(arr)/sizeof(arr[0]));
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }
    //void空类型
    int a = 10;
    float b = 20.f;

    //void类型不可直接定义数据
    //void类型可以作为函数的返回值类型 表示没有返回值
    //void c = 30;
    return 0;
    

}