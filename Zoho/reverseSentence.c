#include <stdio.h>
#include <string.h>

// Function to reverse a word
void reverseWord(char* start, char* end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

// Function to reverse the sentence
void reverseSentence(char* sentence) {
    int sentenceLength = strlen(sentence);
    int i, start = 0;
    for (i = 0; i <= sentenceLength; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            reverseWord(&sentence[start], &sentence[i - 1]);
            start = i + 1;
        }
    }
}

int main() {
    char sentence[1000];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove trailing newline character
    sentence[strcspn(sentence, "\n")] = '\0';

    reverseSentence(sentence);
    printf("Reversed sentence: %s\n", sentence);

    return 0;
}
