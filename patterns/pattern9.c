/*
Pattern 8: Shaded upper right to left Diagonal star Pattern
n = 5

    *
   **
  ***
 ****
*****

*/

#include <stdio.h>

int main()
{
    int n = 5;

    printf("Pattern 9:\n");
    printf("n = %d\n\n", n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j >= n - 1) // Equation of lines, diagonal is just i+j=n-1, and at each step your i will increase which will result in i+j>n , so anything below than that is a shaded region.
            

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