#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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


    //Print thr strings
    for(int i = 0; i < numStrings; i++) {
        printf("%s  ", strings[i]);
    }

    // Free the memory allocated for strings
    for (int i = 0; i < numStrings; i++) {
        free(strings[i]);
    }
    free(strings);

    return 0;
}
