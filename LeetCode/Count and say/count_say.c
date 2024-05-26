// 38. Count and Say
// Medium
// Topics
// Companies
// Hint
// The count-and-say sequence is a sequence of digit strings defined by the recursive formula:

// countAndSay(1) = "1"
// countAndSay(n) is the way you would "say" the digit string from countAndSay(n-1), which is then converted into a different digit string.
// To determine how you "say" a digit string, split it into the minimal number of substrings such that each substring contains exactly one unique digit. Then for each substring, say the number of digits, then say the digit. Finally, concatenate every said digit.

// For example, the saying and conversion for digit string "3322251":


// Given a positive integer n, return the nth term of the count-and-say sequence.

 

// Example 1:

// Input: n = 1
// Output: "1"
// Explanation: This is the base case.
// Example 2:

// Input: n = 4
// Output: "1211"
// Explanation:
// countAndSay(1) = "1"
// countAndSay(2) = say "1" = one 1 = "11"
// countAndSay(3) = say "11" = two 1's = "21"
// countAndSay(4) = say "21" = one 2 + one 1 = "12" + "11" = "1211"


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* countAndSay(int n) {
    if (n <= 0) {
        return NULL;
    }

    // Initialize the sequence with the base case.
    char* sequence = (char*)malloc(sizeof(char) * 2);
    strcpy(sequence, "1");

    for (int i = 1; i < n; i++) {
        int len = strlen(sequence);
        char* temp = (char*)malloc(sizeof(char) * (2 * len + 1));

        int index = 0;
        for (int j = 0; j < len; j++) {
            int count = 1;
            while (j + 1 < len && sequence[j] == sequence[j + 1]) {
                count++;
                j++;
            }

            // Append count and digit to the new sequence.
            temp[index++] = count + '0';
            temp[index++] = sequence[j];
        }

        temp[index] = '\0';

        // Update the sequence for the next iteration.
        free(sequence);
        sequence = temp;
    }

    return sequence;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    char* result = countAndSay(n);
    printf("The %dth term of the count-and-say sequence is: %s\n", n, result);

    // Clean up memory
    free(result);

    return 0;
}
