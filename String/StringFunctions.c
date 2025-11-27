#include <stdio.h>
#include <string.h>

int main()
{
    char a[50] = "hello";
    char b[50] = "world";
    char c[50];

    // strcat
    strcpy(c, a);
    strcat(c, b);
    printf("strcat: %s\n", c);

    // strncat
    strcpy(c, a);
    strncat(c, b, 3);
    printf("strncat: %s\n", c);

    // strcmp
    printf("strcmp: %d\n", strcmp(a, b));

    // strcpy
    strcpy(c, b);
    printf("strcpy: %s\n", c);

    // strncpy
    strncpy(c, a, 3);
    c[3] = '\0';
    printf("strncpy: %s\n", c);

    // strlen (use %d)
    printf("strlen: %d\n", strlen(a));

    // strlwr
    char x[50] = "HeLLo";
    printf("strlwr: %s\n", strlwr(x));

    // strupr
    char y[50] = "HeLLo";
    printf("strupr: %s\n", strupr(y));

    return 0;
}
