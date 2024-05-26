#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// int main() {
//     char s[100], p[100], sc[100], pc[100];
//     scanf("%s", s);
//     scanf("%s", p);
//     int l1 = strlen(s);
//     int l2 = strlen(p);
//     strcpy(sc, s);
//     strcpy(pc, p);
//     int res[l1];
//     int index = 0, j;
//     for(int i = 0; i < l1-l2+1; i++) {
//         int cnt = 0;
//         for(j = i; j < i+l2; j++) {
//             for(int k = 0; k < l2; k++) {
//                 if(s[j] == p[k]) {
//                     p[k] = '\0';
//                     cnt++;
//                     break;
//                 }
//             }

//         }
//         if(cnt == l2) {
//             res[index++] = i ;
//             // printf("%d, ",i);
//         }
//         strcpy(p, pc);
//     }

//     // int l = sizeof(res)/sizeof(res[0]);
//     printf("\nResult : [ ");
//     for(int i = 0; i < index; i++) {
//         // if(res[i] != -1) {
//             printf("%d, ", res[i]);
//         // }
//     }
//     printf("]");


//     return 0;

// }


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
// int* findAnagrams(char * s, char * p, int* returnSize){
//     int l1 = strlen(s);
//     int l2 = strlen(p);
    
//     // Check for invalid inputs
//     if (l1 < l2) {
//         *returnSize = 0;
//         return NULL;
//     }
    
//     // Allocate memory for result array
//     int maxIndices = l1 - l2 + 1;
//     int *res = (int*)malloc(sizeof(int) * maxIndices);
//     *returnSize = 0; // Initialize the size to 0
    
//     // Copy p to pc
//     char pc[l2 + 1];
//     strcpy(pc, p);
    
//     // Iterate through s
//     for (int i = 0; i < l1 - l2 + 1; i++) {
//         int cnt = 0;
//         for (int j = i; j < i + l2; j++) {
//             for (int k = 0; k < l2; k++) {
//                 if (s[j] == pc[k]) {
//                     pc[k] = '\0';
//                     cnt++;
//                     break;
//                 }
//             }
//         }
//         if (cnt == l2) {
//             res[(*returnSize)++] = i;
//         }
//         // Restore pc to its original state
//         strcpy(pc, p);
//     }

//     return res;
// }




/////Optimized Code

int* findAnagrams(char * s, char * p, int* returnSize){
    int l1 = strlen(s);
    int l2 = strlen(p);
    
    if (l1 < l2) {
        *returnSize = 0;
        return NULL;
    }

    int* res = (int*)malloc(sizeof(int) * l1); // Maximum possible size
    *returnSize = 0;
    
    int charCount[26] = {0}; // Array to store character frequency for p and a sliding window of s
    
    // Initialize charCount for string p
    for (int i = 0; i < l2; i++) {
        charCount[p[i] - 'a']++;
    }

    int left = 0, right = 0; // Window indices
    int matches = 0; // Number of characters matched
    
    while (right < l1) {
        int charIndex = s[right] - 'a';

        // Expand the window by adding a character from the right
        charCount[charIndex]--;

        // Check if the current character has been fully matched
        if (charCount[charIndex] >= 0) {
            matches++;
        }

        // Check if the window size matches the length of p
        if (right - left + 1 == l2) {
            // If all characters have been matched, it's an anagram
            if (matches == l2) {
                res[(*returnSize)++] = left;
            }

            // Move the window to the right
            charIndex = s[left] - 'a';
            charCount[charIndex]++;

            // If the character at the left was part of p, decrement matches
            if (charCount[charIndex] > 0) {
                matches--;
            }

            left++; // Shrink the window from the left
        }

        right++; // Expand the window from the right
    }

    return res;
}
