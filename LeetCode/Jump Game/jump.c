#include <stdio.h>
#include <stdbool.h>

bool canJump(int* nums, int numsSize) {
    int maxReach = 0; // maximum reachable position

    for (int i = 0; i < numsSize; i++) {
        if (i > maxReach) {
            return false; // cannot reach beyond the current position
        }

        maxReach = (i + nums[i]) > maxReach ? (i + nums[i]) : maxReach;

        if (maxReach >= numsSize - 1) {
            return true; // successfully reached the end of the array
        }
    }

    return false; // unable to reach the end
}

int main() {
    int numsSize;

    // Get the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &numsSize);

    int nums[numsSize];

    // Get array elements from the user
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < numsSize; i++) {
        scanf("%d", &nums[i]);
    }

    // Check if you can jump to the last index
    printf("Result: %s\n", canJump(nums, numsSize) ? "true" : "false");

    return 0;
}
