/*
Pattern 1: Full Matrix Pattern
n = 5

* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

*/

#include <stdio.h>

int main()
{
    int n = 5;

    printf("Pattern 1:\n");
    printf("n = %d\n\n", n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}