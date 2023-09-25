#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

bool isPalindrome(const char* str, int start, int end) {
    while (start < end) {
        if (str[start] != str[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

void swap(char* a, char* b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

// Helper function to check if the permutation is unique
bool isUnique(char** result, int count, const char* str) {
    for (int i = 0; i < count; i++) {
        if (strcmp(result[i], str) == 0) {
            return false; // Not unique
        }
    }
    return true;
}

void generatePalindromicPermutationsHelper(char* str, int left, int right, char** result, int* count) {
    if (left == right) {
        if (isPalindrome(str, 0, right) && isUnique(result, *count, str)) {
            result[*count] = strdup(str); // Allocate memory for the palindrome and copy it
            (*count)++;
        }
    } else {
        for (int i = left; i <= right; i++) {
            if (i != left && str[i] == str[left]) {
                continue; // Skip duplicates to avoid duplicates in result
            }
            swap(&str[left], &str[i]);
            generatePalindromicPermutationsHelper(str, left + 1, right, result, count);
            swap(&str[left], &str[i]);
        }
    }
}

char** generatePalindromicPermutations(char* str, int* returnSize) {
    int n = strlen(str);
    *returnSize = 0;

    // Calculate the maximum number of permutations (n!)
    int maxPermutations = factorial(n);

    // Allocate memory for the result array
    char** result = (char**)malloc(sizeof(char*) * maxPermutations);

    if (result) {
        generatePalindromicPermutationsHelper(str, 0, n - 1, result, returnSize);
    }

    return result;
}

int main() {
    char str[] = "aabb";
    int returnSize;
    char** palindromicPermutations = generatePalindromicPermutations(str, &returnSize);

    printf("Palindromic Permutations:\n");
    for (int i = 0; i < returnSize; i++) {
        printf("%s\n", palindromicPermutations[i]);
        free(palindromicPermutations[i]); // Free the allocated memory
    }

    // Free the array itself
    free(palindromicPermutations);

    return 0;
}
