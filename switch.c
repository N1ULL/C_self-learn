#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int main()
{
    int score;
    scanf("%d", &score);
    switch (score/10)
    {
    case 10:
        printf("优秀\n");
        break;
    case 9:
        printf("优秀\n");
        break;    
    case 8:
        printf("良好\n");
        break;
    case 7:
        printf("良好\n");
        break;
    case 6:
        printf("及格\n");
        break;
    default:
        printf("不及格\n");
        break;
    }

    return EXIT_SUCCESS;
}