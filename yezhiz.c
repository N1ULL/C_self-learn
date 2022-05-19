#include<stdio.h>
#include<stdlib.h>

int main0101()
{
    //不建议将一个变量的值直接赋值给指针
    //野指针 -> 指针变量指向一个未知空间
    int* p = 100;//程序中允许存在野指针

    //操作系统将0-255作为系统占用不允许访问操作
    //操作野指针对应的内存课件可能报错
    printf("%d\n",*p);
    return EXIT_SUCCESS;
}
int main(void)
{
    //空指针是指内存地址编号为0的空间
    int* p = NULL;

    //操作空指针对应的空间一定会报错
    printf("%d\n",*p);
    //空指针可以用在条件判断
    if (p == NULL)
    {
        /* code */
    }
    
    return 0;
}