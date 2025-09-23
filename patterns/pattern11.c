/*
Pattern 11: Lower Triangle Pattern revised
n = 5

*
* *
* * *
* * * *
* * * * *

*/

#include <stdio.h>

int main()
{
    int n = 5;

    printf("Pattern 11:\n");
    printf("n = %d\n\n", n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i >= j) // Diagonal -> i == j + c // which can also we written as i==j because start is i=0 and j=0, and at each change with respect to diagonal it will be i=1 , j=1 then in next iteration it will be i=2 then j=2.
            {
                printf("X");
            }
        }
        printf("\n");
    }

    return 0;
}