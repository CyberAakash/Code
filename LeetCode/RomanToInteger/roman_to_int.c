#include <stdio.h>

// Function to convert a Roman numeral to an integer
int romanToInt(char* s) {
    int result = 0;

    while (*s) {
        switch (*s) {
            case 'M':
                result += 1000;
                break;
            case 'D':
                result += 500;
                break;
            case 'C':
                if (*(s + 1) == 'D' || *(s + 1) == 'M') {
                    result -= 100;
                } else {
                    result += 100;
                }
                break;
            case 'L':
                result += 50;
                break;
            case 'X':
                if (*(s + 1) == 'L' || *(s + 1) == 'C') {
                    result -= 10;
                } else {
                    result += 10;
                }
                break;
            case 'V':
                result += 5;
                break;
            case 'I':
                if (*(s + 1) == 'V' || *(s + 1) == 'X') {
                    result -= 1;
                } else {
                    result += 1;
                }
                break;
            default:
                return -1; // Invalid Roman numeral
        }
        s++;
    }

    return result;
}

int main() {
    char romanNumeral[20];
    printf("Enter a Roman numeral: ");
    scanf("%s", romanNumeral);

    int result = romanToInt(romanNumeral);
    if (result != -1) {
        printf("The integer value of %s is: %d\n", romanNumeral, result);
    } else {
        printf("Invalid Roman numeral.\n");
    }

    return 0;
}
