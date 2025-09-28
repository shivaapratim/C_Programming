// 1
// 11
// 111
// 1001
// 11111
// 100001
// 1111111
// 10000001
// 111111111
// 1000000001
// 11111111111
// 100000000001

#include <stdio.h>
int main()
{
    int n = 12;

    for (int i = 1; i <= n; i++) // rows
    {
        for (int j = 1; j <= n; j++) // columns (full range)
        {
            if (i >= j) // only print inside triangle
            {
                if (i % 2 == 1) // odd row
                {
                    printf("1");
                }
                else if (j == 1 || i == j) // even row: first or last
                {
                    printf("1");
                }
                else if (i % 2 == 0) // even
                {
                    printf("0");
                }
            }
        }
        printf("\n");
    }
    return 0;
}