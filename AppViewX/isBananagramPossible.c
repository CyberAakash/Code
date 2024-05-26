//Is Bananagram possible or not from the given list of strings


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isBananagramPossible(char** strings, int numStrings) {

    int cnt = numStrings;

    int bananaCounts[26] = {0}; // Array to store the letter counts in "banana"

    // Count the occurrence of each letter in "banana"
    char* banana = "banana";
    int bananaLen = strlen(banana);
    for (int i = 0; i < bananaLen; i++) {
        bananaCounts[banana[i] - 'a']++;
    }

    // Check if the letters in the strings can form "banana"
    for (int i = 0; i < numStrings; i++) {
        char* str = strings[i];
        int strLen = strlen(str);
        int strCounts[26] = {0}; // Array to store the letter counts in the current string

        // Count the occurrence of each letter in the current string
        for (int j = 0; j < strLen; j++) {
            strCounts[str[j] - 'a']++;
        }

        // Compare the letter counts of the current string with "banana"
        for (int j = 0; j < 26; j++) {
            if (strCounts[j] < bananaCounts[j]) {
                // return 0; // Bananagram is not possible
                cnt--;
                break;
            }
        }
    }

    return cnt; // Bananagram is possible
}

int main() {
    int numStrings;
    printf("Enter the number of strings: ");
    scanf("%d", &numStrings);
    
    // Create an array of strings dynamically
    char** strings = (char**)malloc(numStrings * sizeof(char*));
    if (strings == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    // Get the strings from the user
    for (int i = 0; i < numStrings; i++) {
        char str[100];
        printf("Enter string %d: ", i + 1);
        scanf("%s", str);
        
        // Allocate memory for the string and copy it
        strings[i] = (char*)malloc((strlen(str) + 1) * sizeof(char));
        if (strings[i] == NULL) {
            printf("Memory allocation failed\n");
            return 1;
        }
        strcpy(strings[i], str);
    }

    int x = isBananagramPossible(strings, numStrings);
    printf("Bananagram is possible for %d strings\n", x);

    // if (isBananagramPossible(strings, numStrings)) {
    //     printf("Bananagram is possible\n");
    // } else {
    //     printf("Bananagram is not possible\n");
    // }

    // Free the memory allocated for strings
    for (int i = 0; i < numStrings; i++) {
        free(strings[i]);
    }
    free(strings);

    return 0;
}
