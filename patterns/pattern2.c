/*
Pattern 2: Lower Triangle Pattern
n = 5

*
* *
* * *
* * * *
* * * * *

*/

#include <stdio.h>

int main()
{
    int n = 5;

    printf("Pattern 2:\n");
    printf("n = %d\n\n", n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}