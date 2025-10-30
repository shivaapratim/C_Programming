/*
    ============================
      ARRAYS AND SIZEOF IN C
    ============================
*/

#include <stdio.h>

int main()
{

    /*
        TYPES OF ARRAYS
        ---------------
        1. int array    → Stores integers
        2. float array  → Stores decimal numbers
        3. char array   → Stores characters/strings
    */

    int numbers[5];   // Integer array
    float prices[10]; // Float array
    char name[20];    // Character array

    /*
        ============================
        4 WAYS TO DECLARE ARRAYS
        ============================
    */

    // WAY 1: With size, without values (garbage values inside)
    int arr1[5];

    // WAY 2: With size, with values
    int arr2[5] = {10, 20, 30, 40, 50};

    // WAY 3: Without size, with values (compiler calculates size)
    int arr3[] = {10, 20, 30, 40, 50}; // Size automatically becomes 5

    // WAY 4: Partial initialization (remaining elements become 0)
    int arr4[5] = {10, 20}; // arr4[0]=10, arr4[1]=20, rest are 0

    /*
        CHAR ARRAY (STRING)
        -------------------
        Strings are character arrays ending with '\0'
    */

    char str1[10] = "Hello"; // With size
    char str2[] = "Hello";   // Without size (size = 6: H e l l o \0)

    /*
        ============================
        FINDING ARRAY LENGTH
        ============================

        Formula: sizeof(array) / sizeof(array[0])

        - sizeof(array)    → Total bytes of array
        - sizeof(array[0]) → Bytes of one element
        - Division gives   → Number of elements
    */

    int myArray[5] = {1, 2, 3, 4, 5};

    int length = sizeof(myArray) / sizeof(myArray[0]);
    // sizeof(myArray) = 20 bytes (5 elements × 4 bytes)
    // sizeof(myArray[0]) = 4 bytes (one int)
    // length = 20 / 4 = 5 elements

    printf("Array length: %d\n", length);

    /*
        EXAMPLES WITH DIFFERENT TYPES
    */

    // Integer array
    int intArr[] = {10, 20, 30, 40};
    int len1 = sizeof(intArr) / sizeof(intArr[0]);
    printf("Integer array length: %d\n", len1); // Output: 4

    // Float array
    float floatArr[] = {1.5, 2.5, 3.5};
    int len2 = sizeof(floatArr) / sizeof(floatArr[0]);
    printf("Float array length: %d\n", len2); // Output: 3

    // Character array
    char charArr[] = {'A', 'B', 'C', 'D', 'E'};
    int len3 = sizeof(charArr) / sizeof(charArr[0]);
    printf("Char array length: %d\n", len3); // Output: 5

    return 0;
}