// Diamond pattern

//       *
//     * * *
//   * * * * *
//     * * *
//       *
#include <stdio.h>

int main()
{

    int n = 4;
    int size = 2 * n - 1;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            // 4 lines(diagonals) 4 lines.

            if (i + j >= n - 1 &&     // Top-Left
                i >= j - n + 1 &&     // Top-Right
                i <= j + n - 1 &&     // Bottom-Left
                i + j <= 3 * (n - 1)) // Bottom-Right
            {
                printf(" * "); // mind the spaces
            }

            else
            {
                printf("   "); // here also mind the spaces
            }
        }
        printf("\n");
    }

    return 0;
}