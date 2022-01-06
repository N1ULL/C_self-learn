#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
int dowhile()
{
    int i=0;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i < 10);
    return EXIT_SUCCESS;
    
}
int main()
{
    dowhile();
}