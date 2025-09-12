// =============================================================
//  How to approach a problem

//  Note: This guide is written for students to learn how to
//        think about problems logically before coding.
// =============================================================

/*
    Step 1: Observe the Input and Output
    ------------------------------------
    - Carefully read what the problem is asking.
    - Look at sample input and output.
    - Ask yourself: "What is being given?" and "What do I need to produce?"

    Example:
        Input:  5
        Output: 120
        (Here you may guess the problem is about factorial)

    Step 2: Check Constraints
    -------------------------
    - Constraints tell you the possible size of inputs.
    - This helps you decide the data type to use.
        * int (normal values, usually up to 10^9)
        * long long (very large values, up to 10^18)
        * float / double (decimals)
    - Choosing the right type avoids overflow and errors.

    Step 3: Identify Variables
    --------------------------
    - Decide which variables are needed to store:
        * Input values
        * Output values
        * Computation/temporary variables

    Example:
        If you need a loop, you must reserve an "int i".
        If you are storing principal, rate, time → float P, R, T.

    Step 4: Build the Logic (on paper first!)
    -----------------------------------------
    - Before writing code, THINK.
    - Break the problem into steps in plain English or pseudocode.
    - Example (Factorial):
        1. Read n
        2. Set ans = 1
        3. Loop i from 1 to n
        4. Multiply ans by i
        5. Print ans

    IMPORTANT: Don’t jump to code.
    IMPORTANT: Don’t jump to code.

    Step 5: Test the Logic
    ----------------------
    - Run your pseudocode on different inputs (small and large).
    - Does it work for all? If yes, move to coding.

    Step 6: Write the Code
    ----------------------
    - Now write the program in C.
    - By this time, coding is the easiest step because
      the real thinking is already done in the previous steps.

    ------------------------------------------------------------
    Key Takeaway:
    Solving problems is about building LOGIC first.
    Code is just the final translation of your thoughts.
    ------------------------------------------------------------
*/

// Template Example (Not a solution, just structure):

// #include <stdio.h>

// int main() {
//     // Step 1: Declare variables
//     int n, ans = 1;

//     // Step 2: Input
//     scanf("%d", &n);

//     // Step 3: Process (loop)
//     for (int i = 1; i <= n; i++) {
//         ans *= i;
//     }

//     // Step 4: Output
//     printf("%d", ans);

//     return 0;
// }
