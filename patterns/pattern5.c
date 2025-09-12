/*
Pattern 31: Diagonal Numbers Pattern
n = 5

5 4 3 2 *
5 4 3 * 1
5 4 * 2 1
5 * 3 2 1
* 4 3 2 1


*/

#include <stdio.h>

int main()
{
    int n = 5;

    printf("Pattern 31:\n");
    printf("n = %d\n\n", n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j >= n - 1)
            {
                printf("%d ", n - j);
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}