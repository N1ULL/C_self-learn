#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main1101()
{
    char ch[100];

    //通过键盘获取一个字符串
    //gets接受字符串可以带空格
    gets(ch);
    //通过正则表达式 获取带空格字符串
    // scanf("%[^\n]", ch);

    printf("%s\n", ch);

    return EXIT_SUCCESS;
}
int main(void)
{
    char ch[10];
    //"hello\n\0"
    //fgets可以接收空格
    //fgets获取字符串少于元素个数会有\n  大于等于 没有\n
    fgets(ch,sizeof(ch),stdin);

    printf("%s", ch);
    return 0;
}