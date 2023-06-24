// To combine two unsorted arrays into a sorted order, you can follow these steps:

// Create a new array that can accommodate the elements from both arrays.
// Copy all the elements from the first array to the new array.
// Copy all the elements from the second array to the new array.
// Sort the new array in ascending order using any sorting algorithm.
// Print the sorted array.
// Here's an example implementation in C:


// #include <stdio.h>

// void mergeArrays(int arr1[], int size1, int arr2[], int size2, int result[]) {
//     int i, j, k;

//     // Copy elements from the first array
//     for (i = 0; i < size1; i++) {
//         result[i] = arr1[i];
//     }

//     // Copy elements from the second array
//     for (j = 0; j < size2; j++) {
//         result[i + j] = arr2[j];
//     }

//     // Sort the combined array using bubble sort
//     int n = size1 + size2;
//     for (i = 0; i < n - 1; i++) {
//         for (j = 0; j < n - i - 1; j++) {
//             if (result[j] > result[j + 1]) {
//                 // Swap the elements
//                 int temp = result[j];
//                 result[j] = result[j + 1];
//                 result[j + 1] = temp;
//             }
//         }
//     }
// }

// int main() {
//     int arr1[] = {5, 2, 9, 1, 7};
//     int size1 = sizeof(arr1) / sizeof(arr1[0]);

//     int arr2[] = {4, 8, 3, 6};
//     int size2 = sizeof(arr2) / sizeof(arr2[0]);

//     // Calculate the size of the result array
//     int resultSize = size1 + size2;

//     // Create a new array to store the combined and sorted elements
//     int result[resultSize];

//     // Merge and sort the arrays
//     mergeArrays(arr1, size1, arr2, size2, result);

//     // Print the sorted array
//     printf("Sorted Array: ");
//     for (int i = 0; i < resultSize; i++) {
//         printf("%d ", result[i]);
//     }
//     printf("\n");

//     return 0;
// }



#include <stdio.h>

void combineArrays(int nums1[], int nums1Size, int nums2[], int nums2Size, int result[]) {
    int i = 0, j = 0, k = 0;

    while (i < nums1Size && j < nums2Size) {
        if (nums1[i] <= nums2[j]) {
            result[k++] = nums1[i++];
        } else {
            result[k++] = nums2[j++];
        }
    }

    while (i < nums1Size) {
        result[k++] = nums1[i++];
    }

    while (j < nums2Size) {
        result[k++] = nums2[j++];
    }

}

int main() {
    int nums1[] = {1, 3};
    int nums1Size = sizeof(nums1) / sizeof(nums1[0]);

    int nums2[] = {2};
    int nums2Size = sizeof(nums2) / sizeof(nums2[0]);

    int resultSize = nums1Size + nums2Size;
    int result[resultSize];

    combineArrays(nums1, nums1Size, nums2, nums2Size, result);
    printf("Sorted Array: ");
    for (int i = 0; i < resultSize; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
