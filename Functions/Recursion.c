#include <stdio.h>

void rec(int n)
{

    if (n == 0)
        return;

    printf("Anmol ");
    n--;
    rec(n);
}

int main()
{
    // Program to print name n number of times using recursion
    rec(5);
}