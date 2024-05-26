#include <stdio.h>
#include <stdlib.h>

int minSubArrayLen(int target, int nums[], int size) {
    int left = 0;
    int right = 0;
    int sum = 0;
    int minLength = size + 1;

    while (right < size) {
        sum += nums[right];

        while (sum >= target) {
            int subArrayLength = right - left + 1;
            if (subArrayLength < minLength) {
                minLength = subArrayLength;
            }

            sum -= nums[left];
            left++;
        }

        right++;
    }

    return (minLength > size) ? 0 : minLength;
}

int main() {
    int target = 7;
    int nums[] = {3, 1, 1, 0, 4, 0};
    int size = sizeof(nums) / sizeof(nums[0]);

    int minimalLength = minSubArrayLen(target, nums, size);

    printf("Minimal length of subarray: %d\n", minimalLength);

    return 0;
}
