// Given an array and an element k, shift the last k elements to the beginning.
// Example: a[] = {1, 2, 3, 4, 5, 6}
//                k = 2
//           Shift the last 2 elements to the beginning.
// Output : a[] = {5, 6, 1, 2, 3, 4}


#include<stdio.h>
#include<stdlib.h>

int main() {

    int n;
    printf("Enter Numner Of elements :  ");
    scanf("%d", &n);

    printf("\nEnter Elements : \n");
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the value of K : ");
    int k;
    scanf("%d", &k);

    int j = 0;
    while(k > 0) {
        int temp = arr[n-k];
        int i;
        for(i = n-k-1; i >= j; i--) {
            arr[i+1] = arr[i];
        }
        arr[j] = temp;
        j++;
        k--;
    }

    printf("\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    

    return 0;
}


// #include <stdio.h>

// void shiftArray(int arr[], int n, int k) {
//     int temp[k];

//     // Copy the last k elements to the temporary array
//     for (int i = n - k, j = 0; i < n; i++, j++) {
//         temp[j] = arr[i];
//     }

//     // Shift the remaining elements towards the end
//     for (int i = n - k - 1; i >= 0; i--) {
//         arr[i + k] = arr[i];
//     }

//     // Copy the elements from the temporary array to the beginning
//     for (int i = 0; i < k; i++) {
//         arr[i] = temp[i];
//     }
// }

// void printArray(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int k = 2;

//     printf("Original array: ");
//     printArray(arr, n);

//     shiftArray(arr, n, k);

//     printf("Shifted array: ");
//     printArray(arr, n);

//     return 0;
// }
