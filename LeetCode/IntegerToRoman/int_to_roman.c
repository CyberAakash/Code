#include <stdio.h>

// Define arrays to store Roman numeral symbols and their corresponding values
char *roman_numerals[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
int num_numerals = 13; // Number of Roman numerals

// Function to convert an integer to a Roman numeral
void intToRoman(int num) {
    if (num <= 0 || num >= 4000) {
        printf("Invalid input. Please enter a number between 1 and 3999.\n");
        return;
    }

    printf("Roman numeral representation of %d is: ", num);

    for (int i = 0; i < num_numerals; i++) {
        while (num >= values[i]) {
            printf("%s", roman_numerals[i]);
            num -= values[i];
        }
    }

    printf("\n");
}

int main() {
    int num;
    printf("Enter an integer between 1 and 3999: ");
    scanf("%d", &num);

    intToRoman(num);

    return 0;
}






/////////// USING STRUCT

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// // Define a structure to store Roman numerals and their values
// struct RomanNumeral {
//     int value;
//     const char* numeral;
// };

// // Define an array of Roman numerals and their values in descending order
// struct RomanNumeral romanNumerals[] = {
//     {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
//     {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
//     {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
// };

// int numNumerals = sizeof(romanNumerals) / sizeof(romanNumerals[0]);

// // Function to convert an integer to a Roman numeral and return it as a char*
// char* intToRoman(int num) {
//     if (num <= 0 || num >= 4000) {
//         char* invalid_msg = "Invalid input. Please enter a number between 1 and 3999.";
//         char* result = (char*)malloc(strlen(invalid_msg) + 1);
//         strcpy(result, invalid_msg);
//         return result;
//     }

//     char* roman = (char*)malloc(100); // Allocate memory for the result
//     strcpy(roman, ""); // Initialize the result as an empty string

//     for (int i = 0; i < numNumerals; i++) {
//         while (num >= romanNumerals[i].value) {
//             strcat(roman, romanNumerals[i].numeral);
//             num -= romanNumerals[i].value;
//         }
//     }

//     return roman;
// }

// int main() {
//     int num;
//     printf("Enter an integer between 1 and 3999: ");
//     scanf("%d", &num);

//     char* romanNumeral = intToRoman(num);

//     printf("Roman numeral representation of %d is: %s\n", num, romanNumeral);

//     free(romanNumeral); // Remember to free the allocated memory

//     return 0;
// }
