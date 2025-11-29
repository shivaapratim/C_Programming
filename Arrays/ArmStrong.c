#include <stdio.h>

int main()
{
    int n = 153, temp = n, sum = 0, r;

    while (temp > 0)
    {
        r = temp % 10;
        sum += r * r * r;
        temp /= 10;
    }

    if (sum == n)
        printf("Armstrong");
    else
        printf("Not Armstrong");
}
