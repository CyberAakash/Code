
// To find the first repeated character in a string in C, 
// you can use an array to keep track of the count of each character encountered. 


#include <stdio.h>

char findFirstRepeatedChar(char* str) {
    int charCount[256] = {0}; // Assuming ASCII character set

    for (int i = 0; str[i] != '\0'; i++) {
        charCount[str[i]]++;

        // If count is greater than 1, it means the character is repeated
        if (charCount[str[i]] > 1) {
            return str[i];
        }
    }

    return '\0'; // Return null character if no repeated character found
}

int main() {
    char str[] = "Helleo World";
    char result = findFirstRepeatedChar(str);

    if (result != '\0') {
        printf("First repeated character: %c\n", result);
    } else {
        printf("No repeated characters found.\n");
    }

    return 0;
}
