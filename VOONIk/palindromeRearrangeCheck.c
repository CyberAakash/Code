// Check whether a given string can be rearranged to form a palindrome


////////////////////////////////////////////////////////////////////////
// Correct
////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <string.h>

int canFormPalindrome(const char* str) {
    int charCount[256] = {0}; // Assuming ASCII characters

    int len = strlen(str);
    int oddCount = 0;

    // Count the occurrence of each character
    for (int i = 0; i < len; i++) {
        charCount[(int)str[i]]++;
    }

    // Count the number of characters with odd occurrences
    for (int i = 0; i < 256; i++) {
        if (charCount[i] % 2 != 0) {
            oddCount++;
        }
    }

    // If more than one character has odd occurrences, cannot form a palindrome
    if (oddCount > 1) {
        return 0;
    }

    return 1;
}

int main() {
    // const char* str = "aabbc";
    int n;
    printf("Enter the size of the string  :  ");
    scanf("%d", &n);

    char str[n];
    scanf("%s", str);

    if (canFormPalindrome(str)) {
        printf("The given string can be rearranged to form a palindrome.\n");
    } else {
        printf("The given string cannot be rearranged to form a palindrome.\n");
    }

    return 0;
}


