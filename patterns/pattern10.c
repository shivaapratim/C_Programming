/*
Pattern 10: Upper Triangle Pattern
n = 5


*****
****
***
**
*


*/

#include <stdio.h>

int main()
{
    int n = 5;

    printf("Pattern 10:\n");
    printf("n = %d\n\n", n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j <= n - 1) // Equation of lines, diagonal is just i+j=n-1, and at each step your i will increase which will result in i+j>n , so anything below than that is a shaded region.

            // Now if you write anything which has to cover the upper region it will mean that my i will decrease so eventually this equation will also decrease, then, i+j<n-1.

            // Similar to pattern 3 , but look how efficient and easy this is.

            // We dont have to think about the loops, we only have to think in a way to figure out the logic for lines.

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