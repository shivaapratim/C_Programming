
// *
// * *
// * * *
// * * * *
// * * *
// * *
// *

#include <stdio.h>

int main()
{

    int n = 4;

    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if ((i <= n - 1 && i >= j) || (i >= n - 1 && i + j <= (2 * n - 2)))

            {
                printf("* ");
            }
            else
            {

                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}