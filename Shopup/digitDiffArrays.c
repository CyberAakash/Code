// Subtraction of long integers in array.consider two array A and B subtract A from B and store the result in new array C
// EG:
// A=[1,2,7,0,5]
// B=[   9,1,9,9]
// O/P
// C=[3,5,0,6]



#include <stdio.h>

#define MAX_LENGTH 100

// Function to subtract long integers represented as arrays
void subtractLongIntegers(int A[], int B[], int C[], int sizeA, int sizeB) {
    int maxLength = (sizeA > sizeB) ? sizeA : sizeB;
    int carry = 0;

    // Pad the shorter array with leading zeros
    if (sizeA < maxLength) {
        for (int i = sizeA; i < maxLength; i++) {
            A[i] = 0;
        }
        sizeA = maxLength;
    } else if (sizeB < maxLength) {
        for (int i = sizeB; i < maxLength; i++) {
            B[i] = 0;
        }
        sizeB = maxLength;
    }

    // Perform subtraction
    for (int i = maxLength - 1; i >= 0; i--) {
        int digitDiff = A[i] - B[i] - carry;

        if (digitDiff < 0) {
            digitDiff += 10;
            carry = 1;
        } else {
            carry = 0;
        }

        C[i] = digitDiff;
    }
}

// Function to print the long integer represented as an array
void printLongInteger(int array[], int size) {
    int i = 0;
    while (array[i] == 0 && i < size - 1) {
        i++;
    }

    for (; i < size; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");
}

int main() {
    int A[] = {1, 2, 7, 0, 5};
    int B[] = {9, 1, 9, 9};
    int C[MAX_LENGTH] = {0};

    int sizeA = sizeof(A) / sizeof(A[0]);
    int sizeB = sizeof(B) / sizeof(B[0]);

    subtractLongIntegers(A, B, C, sizeA, sizeB);

    printf("A: ");
    printLongInteger(A, sizeA);

    printf("B: ");
    printLongInteger(B, sizeB);

    printf("C: ");
    printLongInteger(C, sizeA);

    return 0;
}

