//Number Pyramid

//    1
//   222
//  33333
// 4444444

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
                printf("%d", sum);
            }
            else
            {
                printf(" ");
            }
        }
        sum++; // when a particular row is filled, increment the sum.
        printf("\n");
    }
    return 0;
}