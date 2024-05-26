// Finding the maximum subsequent sum in the array 
// containing positive and negative numbers.

#include <stdio.h>

// Function to find the maximum subarray sum
int maxSubarraySum(int arr[], int size) {
    int maxSum = arr[0];
    int currentSum = arr[0];

    for (int i = 1; i < size; i++) {
        // Compare the current element with the sum including the current element
        currentSum = (arr[i] > currentSum + arr[i]) ? arr[i] : currentSum + arr[i];
        
        // Update the maximum sum if the current sum is greater
        maxSum = (currentSum > maxSum) ? currentSum : maxSum;
    }

    return maxSum;
}

int main() {
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxSum = maxSubarraySum(arr, size);
    printf("Maximum subarray sum: %d\n", maxSum);

    return 0;
}
