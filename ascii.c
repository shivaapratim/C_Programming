/*
    If This is difficult to read here, try prefering to copy the code and read in VSCODE

    // =============================================================
//  Data Types in C – Size and Range


    Why do we need this?
    --------------------
    - Every variable in C must have a data type.
    - Data types decide:
        * How much memory (bytes) is used.
        * What range of values can be stored.
        * Whether the variable can hold decimals or only integers.

    Important: Sizes may differ slightly depending on compiler,
               but these are the *typical* values (for 32-bit/64-bit systems).

    ------------------------------------------------------------
    | Type                | Typical Size | Range               |
    ------------------------------------------------------------
    | char                | 1 byte       | -127 to 127 OR 0–255 |
    | unsigned char       | 1 byte       | 0 to 255             |
    | signed char         | 1 byte       | -127 to 127          |
    ------------------------------------------------------------
    | int                 | 4 bytes      | -2,147,483,648 to    |
    |                     |              |  2,147,483,647       |
    | unsigned int        | 4 bytes      | 0 to 4,294,967,295   |
    | signed int          | 4 bytes      | -2,147,483,648 to    |
    |                     |              |  2,147,483,647       |
    ------------------------------------------------------------
    | short int           | 2 bytes      | -32,768 to 32,767    |
    | unsigned short int  | 2 bytes      | 0 to 65,535          |
    | signed short int    | 2 bytes      | -32,768 to 32,767    |
    ------------------------------------------------------------
    | long int            | 4 bytes      | -2,147,483,647 to    |
    |                     |              |  2,147,483,647       |
    | signed long int     | 4 bytes      | same as long int     |
    | unsigned long int   | 4 bytes      | 0 to 4,294,967,295   |
    ------------------------------------------------------------
    | float               | 4 bytes      | ±3.4e ±38  (~7 digits)|
    | double              | 8 bytes      | ±1.7e ±308 (~15 digits)|
    | long double         | 8 bytes      | ±1.7e ±308 (~15 digits)|
    ------------------------------------------------------------

    Notes:
    ------
    - "signed" means both negative and positive values.
    - "unsigned" means only positive values (range doubles).
    - float/double are for decimal numbers.
    - Use the right type depending on the problem and constraints.

    Example trick:
    --------------
    int a = 2147483647;     // maximum int
    printf("%d", a + 1);    // overflow! Will wrap around.

    This is why choosing the correct type matters.
*/

// Template Example:

// #include <stdio.h>

// int main() {
//     char ch = 'A';
//     int num = 100;
//     float pi = 3.14;

//     printf("Character: %c, ASCII: %d\n", ch, ch);
//     printf("Integer: %d\n", num);
//     printf("Float: %.2f\n", pi);

//     return 0;
// }
