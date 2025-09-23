/*
Pattern 6: Diagonal star Pattern
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

    printf("Pattern 6:\n");
    printf("n = %d\n\n", n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
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