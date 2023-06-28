#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    int n = strlen(str1);
    int m = strlen(str2);
    if(n != m) {
        printf("The second string is not a rotation of the first string.");
        return 0;
    }
    strcat(str1, str1);
    if(strstr(str1, str2) != NULL)
        printf("The second string is a rotation of the first string.");
    else
        printf("The second string is not a rotation of the first string.");
    return 0;
}
