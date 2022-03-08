#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main1001()
{
    //定义字符数组
    char arr[6]={'h','e','l','l','o'};
    //字符
    //chaar ch = 'a';
    //字符串 字符串结束标志为\0 数字0等同于\0 但不等同于'0'
    // char * arr ="hello";
    // char arr[] = "hello";
    // char arr[] = {'h','e','l','l','o','\0'};

    // printf("%d\n", sizeof(arr));//sizeof(数据类型)
    printf("%s", arr);

    // for (int i = 0; i < sizeof(arr); i++)
    // {
    //     printf("%c", arr[i]);
    // }
    

    return EXIT_SUCCESS;
}
int main1002()
{
    //定义字符数组存储字符串
    char ch[10];

    scanf("%s", ch);

    printf("%s", ch);
    return 0;
}
int main(void)
{
    //字符串拼接
    char ch1[] = "hello";
    char ch2[] = "world";
    char ch3[20];

    int i = 0;
    int j = 0;
    while (ch1[i] != '\0')
    {
        ch3[i] = ch1[i];
        i++;
    }
    while (ch2[j] != '\0')
    {
        ch3[i+j] = ch2[j];
        j++;
    }
    ch3[i+j] = '\0';
    
    printf("%s", ch3);
    return 0;
    

}