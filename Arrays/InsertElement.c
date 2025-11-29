#include <stdio.h>

int main()
{
    int a[10] = {10, 20, 30, 40};
    int n = 4, i, index = 2, value = 99;

    for (i = n; i > index; i--)
        a[i] = a[i - 1];

    a[index] = value;
    n++;

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}
