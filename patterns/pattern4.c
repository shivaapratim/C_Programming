/*
Pattern 30: Descending Numbers Matrix
n = 5

5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
*/

#include <stdio.h>

int main()
{
    int n = 5;

    printf("Pattern 30:\n");
    printf("n = %d\n\n", n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", n - j);
        }
        printf("\n");
    }

    return 0;
}