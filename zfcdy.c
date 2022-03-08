#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

int main1103()
{
    char ch[] = "hello world";
    //puts自带换行 遇到\0停止
    puts(ch);
    // puts("hello\0 world");
    //puts("") 可以用来换行

    return EXIT_SUCCESS;
}
int main(void)
{
    char ch[] = "hello world";
    fputs(ch, stdout);

    return 0;
}