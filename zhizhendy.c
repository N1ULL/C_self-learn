#include<stdio.h>
#include<stdlib.h>

int main0101()
{
    int a = 0xaabbccdd;
    //a = 100;

    printf("%p\n", &a);
    getchar();

    return EXIT_SUCCESS;
}
int main0102(void)
{
    //定义指针变量存储地址
    int a = 10;
    //指针类型 -> 数据类型*
    int* p;
    //&是取地址符号是升维度的
    //*是取值符号是降维度的
    p = &a;
    //通过指针简介改变变量的值
    *p = 100;
    printf("%p\n", &a);
    printf("%p\n", p);
    printf("%d\n", a);
    printf("%d\n", *p);
    return 0;
}
int main(void)
{
    char ch = 'a';
    char* p = &ch;
    // int a = 10;
    // int* p = &a;
    printf("%d\n", sizeof(p));
    printf("%d\n", sizeof(char*));
    printf("%d\n", sizeof(int*));
    printf("%d\n", sizeof(short*));
    printf("%d\n", sizeof(long*));
    printf("%d\n", sizeof(long long*));
    printf("%d\n", sizeof(float*));
    
    return 0;
}