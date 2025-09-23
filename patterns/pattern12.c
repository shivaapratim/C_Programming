/*
Pattern 12: Triangle
n = 4

     *
   * * *
 * * * * *
* * * * * *

*/

#include <stdio.h>

int main()
{
    int n = 5;

    printf("Pattern 11:\n");
    printf("n = %d\n\n", n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            if (i + j >= n - 1 && i >= j - n + 1)
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