#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Function to check if the number formed by the first 'n' digits is divisible by 'n'
bool isDivisibleByN(int num, int n) {
    return (num % n == 0);
}

// Function to generate the random 10-digit number with the given conditions
int generateRandomNumber() {
    int digits[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Shuffle the digits using modified Fisher-Yates algorithm
    for (int i = 9; i > 0; i--) {
        int j = rand() % (i + 1);
        int temp = digits[i];
        digits[i] = digits[j];
        digits[j] = temp;
    }

    int randomNumber = 0;
    for (int i = 0; i < 10; i++) {
        randomNumber = randomNumber * 10 + digits[i];
        if (!isDivisibleByN(randomNumber, i + 1))
            return generateRandomNumber();
    }

    return randomNumber;
}

int main() {
    srand(42);  // Seed the random number generator with a fixed value for reproducibility

    int randomNumber = generateRandomNumber();
    printf("Generated 10-digit number: %010d\n", randomNumber);

    return 0;
}
