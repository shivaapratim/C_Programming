// Inverted Triangle pattern

// XXXXXXXXX
//  XXXXXXX
//   XXXXX
//    XXX
//     X

#include <stdio.h>

int main()
{
    int n = 5;

    printf("Pattern 11:\n");
    printf("n = %d\n\n", n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++) // matrix size detection
        {
            if (i <= j && i + j <= 2 * n - 2)
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
