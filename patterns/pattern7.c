/*
Pattern 7: Inverted Diagonal star Pattern
n = 5

    *
   *
  *
 *
*

*/

#include <stdio.h>

int main()
{
    int n = 5;

    printf("Pattern 7:\n");
    printf("n = %d\n\n", n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j == n - 1)
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