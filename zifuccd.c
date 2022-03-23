#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>

int main()
{
    //计算字符有效个数
    char ch[100] = "hello world";

    printf("数组大小:%d\n", sizeof(ch));
    printf("字符串长度:%d\n", strlen(ch));
    app();
    
    return EXIT_SUCCESS;
}
void app()
{
    char ch[] = "hello world";

    int len = 0;
    while (ch[len] != '\0')
    {
        len++;

    }
    printf("字符串长度:%d\n", len);
    return 0;
}