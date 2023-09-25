#include <stdio.h>
#include <string.h>

int canPermutePalindrome(char *s) {
    int char_count[256] = {0}; // Assuming ASCII characters

    for (int i = 0; i < strlen(s); i++) {
        char_count[s[i]]++;
    }

    int odd_count = 0;
    for (int i = 0; i < 256; i++) {
        if (char_count[i] % 2 != 0) {
            odd_count++;
        }
    }

    return odd_count <= 1;
}

int main() {
    char str[] = "carerac";
    if (canPermutePalindrome(str)) {
        printf("The string can be permuted to form a palindrome.\n");
    } else {
        printf("The string cannot be permuted to form a palindrome.\n");
    }

    return 0;
}
