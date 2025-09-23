
//       *
//     * *
//   * * *
// * * * *
//   * * *
//     * *
//       *

#include <stdio.h>

int main()
{

    int n = 4;

    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < n; j++) // n -> col , rows 2n-1
        {

            if ((i >= n - 1 && i <= j + n - 1) || (i <= n - 1 && i + j >= n - 1))

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