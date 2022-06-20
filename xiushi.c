#include<stdio.h>
#include<stdlib.h>

int main0401()
{
    //常量
    const int a = 10;
    //a = 100; err
    //指针间接修改常量值
    int* p = &a;
    *p = 100;
    printf("%d\n", a);

    return EXIT_SUCCESS;
}
int main0402(void)
{
    int a =110;
    int b = 20;
    const int* p = &a;

    p = &b;
    printf("%d\n", *p);
    return 0;

}
/*
1.const 修饰指针类型
可以修改指针变量的值
不可以修改指针指向内存空间的值
2.const 修饰指针变量
可以修改指针指向内存空间的值
不可修改指针变量的值
*/
int main0403(void)
{
    int a = 10;
    int b = 20;
    int* const p = &a;

    *p = 200;
    printf("%d\n", a);
    return 0;

}
int main(void)
{
    int a = 10;
    int b = 20;
    //修饰指针类型  修饰指针变量
    const int* const p = &a;

    printf("%d\n", *p);
    //*pp是一级指针的值
    //**pp是变量的值
    int** pp = &p;
    *pp = &b;
    //p = &b; err
    //*p = 100; err
    printf("%d\n", *p);
    return 0;

}