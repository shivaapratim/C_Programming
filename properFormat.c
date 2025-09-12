/*
    ============================
          C PROGRAM TEMPLATE
    ============================

    This file explains:
    - Structure of a C program
    - Proper formatting and indentation
    - Templates for if-else, loops, etc.
    - Common rules and pitfalls
*/

// Preprocessor directive
// #include <stdio.h> → "Standard Input Output header file"
// It lets us use printf(), scanf(), etc.
#include <stdio.h>

// main() function is the entry point of every C program
// Return type is int (integer) because it returns 0 or 1 at the end
// 0 = program executed successfully
// 1 = program ended with an error
int main(void)
{
    // Code block of main begins here { }
    // Convention: Indent all code inside this block by 4 spaces

    // =====================
    // IF-ELSE TEMPLATE
    // =====================
    /*
        if (condition) {
            // code to execute if condition is true
        }
        else if (another_condition) {
            // code to execute if first condition is false but this one is true
        }
        else {
            // code to execute if all above conditions are false
        }

        NOTE:
        - Always use { } braces, even if only one statement.
        - Inside { }, indent 4 spaces.
        - BEWARE: if (condition); { } ← this extra semicolon ends the if statement early!
    */

    // =====================
    // FOR LOOP TEMPLATE
    // =====================
    /*
        for (initialization; condition; update) {
            // repeated code block
        }

        Example pattern:
        for (int i = 0; i < 10; i++) {
            // executes 10 times (i = 0 to 9)
        }
    */

    // =====================
    // WHILE LOOP TEMPLATE
    // =====================
    /*
        while (condition) {
            // code executes repeatedly as long as condition is true
        }

        Example pattern:
        int i = 0;
        while (i < 10) {
            // executes until i reaches 10
            i++;
        }
    */

    // =====================
    // DO-WHILE LOOP TEMPLATE
    // =====================
    /*
        do {
            // code executes at least once
        } while (condition);

        NOTE:
        - Pay attention to the semicolon after while(condition);
        - This loop runs once before checking the condition.
    */

    // Program ends here
    return 0; // Return 0 means program executed successfully
}

/*
    ============================
            KEY NOTES
    ============================
    1. #include <stdio.h> → preprocessor directive (adds standard I/O).
    2. int main(void) → program entry point, returns 0/1.
    3. { } → block of code, always use with 4 spaces indentation.
    4. ; → semicolon ends a statement.
    5. printf() → prints output, scanf() → takes input.
    6. if-else, for, while, do-while are control structures.
    7. Write clean, indented code for readability.

    NOTE FOR STUDENTS:
    This template will be updated as we learn new things in further classes.
*/
