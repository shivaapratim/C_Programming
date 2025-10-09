#include <stdio.h>

// 0-1 Triangle Pattern

// 1
// 0 1
// 1 0 1
// 0 1 0 1

int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= i)
            {
                // Alternating 0 and 1 based on sum of i+j
                if ((i + j) % 2 == 0)
                {
                    printf("0 ");
                }
                else
                {
                    printf("1 ");
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}