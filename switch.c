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
        printf("����\n");
        break;
    case 9:
        printf("����\n");
        break;    
    case 8:
        printf("����\n");
        break;
    case 7:
        printf("����\n");
        break;
    case 6:
        printf("����\n");
        break;
    default:
        printf("������\n");
        break;
    }

    return EXIT_SUCCESS;
}