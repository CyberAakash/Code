// Checking if the two strings are anagrams.   
// Eg: Input: cat,act
// Output: yes

#include <stdio.h>
#include <string.h>

// Function to check if two strings are anagrams
int areAnagrams(const char* str1, const char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // If the lengths of the strings are different, they cannot be anagrams
    if (len1 != len2) {
        return 0;
    }

    // Arrays to store the frequency of characters in the strings
    int freq1[26] = {0};  // Assuming the strings contain only lowercase alphabets
    int freq2[26] = {0};

    // Update the frequency arrays based on characters in str1 and str2
    for (int i = 0; i < len1; i++) {
        freq1[str1[i] - 'a']++;
        freq2[str2[i] - 'a']++;
    }

    // Compare the frequency arrays
    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            return 0;  // If any frequency differs, they are not anagrams
        }
    }

    return 1;  // The strings are anagrams
}

int main() {
    const char* str1 = "cat";
    const char* str2 = "act";

    if (areAnagrams(str1, str2)) {
        printf("Yes, the strings are anagrams.\n");
    } else {
        printf("No, the strings are not anagrams.\n");
    }

    return 0;
}
