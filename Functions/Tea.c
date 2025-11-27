
#include <stdio.h>

void boil()
{
    printf("Boiled the water\n");
}
void addTea()
{
    printf("Added Tea\n");
}
void addMilk()
{
    printf("Milk added\n");
}

void Maketea()
{
    boil();
    addTea();
    addMilk();
}

int main()
{
    Maketea();
    Maketea();
    Maketea();
    return 0;
}