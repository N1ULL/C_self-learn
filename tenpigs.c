#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
#define SIZE 10

int main()
{
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = 0;

    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
           
    }
    printf("max=%d\n", max);
    
    

    return EXIT_SUCCESS;
}