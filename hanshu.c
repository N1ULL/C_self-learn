#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

//返回类型 函数名(参数列表)
//{
//代码体
//return 0;
//}
int add(int a, int b)
{
    int sum = a + b;
    return sum;
}
int main()
{
    int a = 10;
    int b = 20;
    int c;
    //函数调用

    c = add(a,b);
    printf("%d\n", c);
    return EXIT_SUCCESS;
}
