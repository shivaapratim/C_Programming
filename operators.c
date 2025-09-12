#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    /*
        In this loop, we are learning about:
        - Arithmetic operators
        - Shorthand assignment operators (+=, -=, *=, /=)
        - Increment (++) and Decrement (--)

        Example:
        i++;      → i = i + 1
        i--;      → i = i - 1
        i += 2;   → i = i + 2
        i -= 3;   → i = i - 3
        i *= 2;   → i = i * 2
        i /= 2;   → i = i / 2
    */

    // for loop: starts from 2, runs till n, increments by 2 each time
    for (int i = 2; i <= n; i += 2) // here i += 2 means i = i + 2
    {
        printf("%d\n", i); // print the current value of i
    }

    return 0;
}
