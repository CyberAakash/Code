#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void rotate_right(char *str) {
    int len = strlen(str);
    char temp = str[len - 1];
    for (int i = len - 1; i > 0; i--) {
        str[i] = str[i - 1];
    }
    str[0] = temp;
}

void rotate_left(char *str) {
    int len = strlen(str);
    char temp1 = str[0];
    char temp2 = str[1];
    for (int i = 0; i < len - 2; i++) {
        str[i] = str[i + 2];
    }
    str[len - 2] = temp1;
    str[len - 1] = temp2;
}

int sum_of_squares(int num) {
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += digit * digit;
        num /= 10;
    }
    return sum;
}

int main() {
    char input[100];
    fgets(input, 100, stdin);
    char *token = strtok(input, ", ");
    while (token != NULL) {
        char *str = strtok(token, ":");
        int num = atoi(strtok(NULL, ":"));
        int sum = sum_of_squares(num);
        if (sum % 2 == 0) {
            rotate_right(str);
        } else {
            rotate_left(str);
            rotate_left(str);
        }
        printf("%s ", str);
        token = strtok(NULL, ", ");
    }
    return 0;
}
