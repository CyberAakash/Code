#include <stdio.h>
#include <stdlib.h>

void number_triangle(int n) {
    int i, j;
        for (j = n; j > 0; j--) {
            printf("   ");
        }
        printf("0\n");
    for (i = n; i >= 1; i--) {
        // Print leading spaces
        for (j = 1; j <= i - 1; j++) {
            printf("   ");
        }

        // Print numbers in descending order
        for (j = i; j <= n; j++) {
            printf("%d ", j);
        }

        // Print 0
        printf("0 ");

        // Print numbers in ascending order
        for (j = n; j >= i; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    number_triangle(n);
    return 0;
}
