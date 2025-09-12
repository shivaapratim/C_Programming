#include <stdio.h>

/*
    Program: Simple Interest Demonstration
    Idea: Show how data types affect calculations
    Author: Shivang
*/

int main()
{
    // Correct version using float
    float P, R, T, SI;
    printf("Enter Principal, Rate and Time: ");
    scanf("%f %f %f", &P, &R, &T);

    SI = (P * R * T) / 100;
    printf("\n[Correct] Simple Interest = %.2f\n", SI);

    //

    // -------------------------------------------------
    // 1: Using int instead of float
    // Observe what happens when decimals are lost
    // -------------------------------------------------
    int Pi = 1234, Ri = 4, Ti = 2; // notice Rate = 4 (not 4.5, decimal gone)
    float SIi = (Pi * Ri * Ti) / 100;
    printf("\n[1] With int: SI = %.2f  (decimal part lost)\n", SIi);

    // -------------------------------------------------
    // 2: Mixing int and float
    // Here, int automatically promotes to float.
    // Works fine, but still no decimals if int values are used.
    // -------------------------------------------------
    int P2 = 1000;
    float R2 = 5.5, T2 = 2.5;
    float SI2 = (P2 * R2 * T2) / 100;
    printf("\n[2] Mixed int + float: SI = %.2f  (this works fine)\n", SI2);

    // -------------------------------------------------
    // 3: Using char
    // Let's trick your mind a bit:
    // Storing 1000 in a char will cause overflow (char range is small).
    // The calculation will look strange because 'P' no longer holds 1000.
    // -------------------------------------------------
    char Pc = 1000, Rc = 5, Tc = 2; // Note this line will show error while saving which is a warning cause we are storing an integer(1000) in char (Pc).
    float SIc = (Pc * Rc * Tc) / 100;
    printf("\n[3] Using char: SI = %.2f  (unexpected result due to overflow)\n", SIc);

    // -------------------------------------------------
    // Now class, it's time for some practice:
    // Try changing values of P, R, T in different types (int, float, char)
    // and explain why the result changes.
    // -------------------------------------------------

    return 0;
}
