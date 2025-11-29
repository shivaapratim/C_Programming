#include <stdio.h>

int main()
{
    int a[10] = {10, 20, 30, 40, 50};
    int n = 5, i, index = 2; // delete a[2] = 30

    for (i = index; i < n - 1; i++)
        a[i] = a[i + 1];

    n--;

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}
