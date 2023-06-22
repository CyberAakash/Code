// Write a program to move “0” digits as front side of the number without using additional 
// array
//  Eg: Input: a[ ] = 1 0 2 0 3 0 0 0 5 6 7 0 2 
//  Output: a[ ] = 0 0 0 0 0 0 1 2 3 5 6 7 2


// #include <stdio.h>

// void moveZerosToFront(int arr[], int size) {
//     int writeIndex = 0;
//     int cnt = 0;

//     // Move non-zero elements to the front of the array
//     for (int i = 0; i < size; i++) {
//         if (arr[i] != 0) {
//             arr[writeIndex++] = arr[i];
//             cnt++;
//         }
//     }

//     // Fill the remaining elements with zeros
//     while (writeIndex < size) {
//         arr[writeIndex++] = 0;
//     }


// }

// int main() {
//     int arr[] = {1, 0, 2, 0, 3, 0, 0, 0, 5, 6, 7, 0, 2};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     printf("Original Array: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }

//     moveZerosToFront(arr, size);

//     printf("\nModified Array: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void moveZerosToFront(int arr[], int size) {
    int zcnt = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            int index = i;
            for(int j = i-1; j > zcnt; j--) {
                arr[index--] = arr[j];
            }
            arr[zcnt++] = 0;
        }
    }



}

int main() {

    int arr[] = {1, 0, 2, 0, 3, 0, 0, 0, 5, 6, 7, 0, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    moveZerosToFront(arr, size);

    printf("\nModified Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }


    return 0;
}