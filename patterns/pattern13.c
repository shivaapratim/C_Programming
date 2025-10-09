/*
Pattern 13: Hollow rectangle
n = 5

* * * * *
*       *
*       *
*       *
* * * * *

*/

#include <stdio.h>

int main()
{
    int n = 5;

    printf("Pattern 11:\n");
    printf("n = %d\n\n", n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == n - 1 || i == 0 || j == 0 || j == n - 1) // 4 lines 4 equations
            {
                printf("X");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}