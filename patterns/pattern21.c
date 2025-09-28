
//                1
//            2   3   4
//        5   6   7   8   9
//   10  11  12  13  14  15  16

#include <stdio.h>
int main()
{
    int n = 4;
    int sum = 1; // to increment it step by step.

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {

            if (i + j >= n - 1 && i >= j - n + 1)
            {
                printf("%4d", sum); // fix spaces
                sum++;              // when a particular col is filled, increment the sum.
            }
            else
            {
                printf("    ");
            }
        }

        printf("\n");
    }
    return 0;
}