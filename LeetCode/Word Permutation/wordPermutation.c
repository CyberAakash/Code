

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

void permute(char *word, int start, int end, char **permutations, int *count) {
    if (start == end) {
        permutations[(*count)] = strdup(word);
        (*count)++;
    } else {
        for (int i = start; i <= end; i++) {
            swap(&word[start], &word[i]);
            permute(word, start + 1, end, permutations, count);
            swap(&word[start], &word[i]); // backtrack
        }
    }
}

int compare(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    char word[100];
    printf("Enter a word: ");
    scanf("%s", word);

    int length = strlen(word);

    char **permutations = (char **)malloc(sizeof(char *) * factorial(length));
    int count = 0;

    permute(word, 0, length - 1, permutations, &count);

    qsort(permutations, count, sizeof(char *), compare);

    printf("Sorted Permutations:\n");
    for (int i = 0; i < count; i++) {
        printf("%s\n", permutations[i]);
        if (strcmp(permutations[i], word) == 0) {
            printf("Index: %d\n", i);
        }
    }

    for (int i = 0; i < count; i++) {
        free(permutations[i]);
    }
    free(permutations);

    return 0;
}
