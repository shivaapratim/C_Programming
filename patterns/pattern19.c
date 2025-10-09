// Number right angle triangle

// 1
// 111
// 11111
// 1111111

#include <stdio.h>
int main()
{
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {

            if (i + j >= n - 1 && i >= j - n + 1)
            {
                printf("%d", 1);
            }
        }
        printf("\n");
    }
    return 0;
}