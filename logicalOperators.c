#include <stdio.h> // Standard I/O library

int main(void)
{
    int age;
    int hasID;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Do you have an ID? (1 = Yes, 0 = No): ");
    scanf("%d", &hasID);

    /*
        ==========================================
        LOGICAL OPERATORS IN C
        ==========================================

        1. AND  (&&) → true only if BOTH conditions are true
        2. OR   (||) → true if AT LEAST ONE condition is true
        3. NOT  (!)  → reverses the result (true becomes false, false becomes true)

        Examples:
        if (age >= 18 && hasID == 1)   → both must be true
        if (age < 18 || hasID == 0)    → either one is true
        if (!(age >= 18))              → NOT operator, true if age < 18
    */

    // Example: checking if a person can vote
    if (age >= 18 && hasID == 1)
    { // AND operator
        printf("You are eligible to vote.\n");
    }
    else if (age >= 18 || hasID == 1)
    { // OR operator
        printf("You partially qualify (need both age and ID).\n");
    }
    else if (!(age >= 18))
    { // NOT operator
        printf("You are underage.\n");
    }
    else
    {
        printf("Not eligible.\n");
    }

    return 0;
}
