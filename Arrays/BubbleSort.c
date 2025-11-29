#include <stdio.h>

int main()
{
    int a[] = {5, 2, 8, 1, 3};
    int n = 5, i, j, temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}
