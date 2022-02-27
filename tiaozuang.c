#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j == 5)
            {
                break;
            }
            printf("i=%d j=%d\n", i, j);
        }
        
    }
    
    return EXIT_SUCCESS;
}