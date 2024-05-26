

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void reverseAlphanumeric(char* sentence) {
    int length = strlen(sentence);
    int start = 0;

    for (int i = 0; i <= length; i++) {
        if (!isalnum(sentence[i])) {
            int end = i - 1;

            // Reverse the alphanumeric substring
            while (start < end) {
                char temp = sentence[start];
                sentence[start] = sentence[end];
                sentence[end] = temp;
                start++;
                end--;
            }

            // Move the start index to the next word
            start = i + 1;
        }
    }
}

int main() {
    char sentence[] = "my ^&na$me@#$ is123 Mike";

    printf("Original Sentence: %s\n", sentence);

    reverseAlphanumeric(sentence);

    printf("Modified Sentence: %s\n", sentence);

    return 0;
}
