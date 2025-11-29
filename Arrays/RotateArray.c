#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int n = 5, i;
    int first = a[0];

    for (i = 0; i < n - 1; i++)
        a[i] = a[i + 1];

    a[n - 1] = first;

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}
