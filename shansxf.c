#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
// #define MAX(a,b) (a)>(b)?(a):(b)
//三目运算符
//表达式1?表达式2:表达式3
//首先会计算表达式1的值，看看是成立还是不成立，如果表达式1成立，
//那么这个三目运算符整体的值呢就是表达式2的值，否则（也就是表达式1不成立），这个三目运算符整体的值就是表达式3的值。

// int main()
// {
//     int a = 10;
//     int b = 20;
//     printf("%d\n", MAX(a,b));
//     return 0;
// }
int main()
{
    int a = 10;
    int b = 20;

    printf("%d", a > b ? a : b);

    // if (a > b)
    // {
    //     printf("a大\n");
    // }
    // else
    // {
    //     printf("b大\n");
    // }
    return EXIT_SUCCESS;
}