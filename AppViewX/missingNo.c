
// Find Missing elements in an array, He gave me time until I gave him XOR solution, and 
// then he asked how can you explain this to a 5-year-old kid: 



// To find missing elements in an array, you can use the XOR (exclusive OR) operation. XOR is a mathematical operation that compares two binary values and returns a result based on their differences.

// Here's how the XOR solution works:

// Start with a variable called "missing" set to 0.

// Iterate through each element in the array.

// For each element, perform the XOR operation between "missing" and the element itself.

// After iterating through all the elements, the value of "missing" will be the XOR of all the missing elements in the array.

// The reason this works is that XORing a number with itself results in 0, so when we XOR all the elements together, the duplicate elements will cancel each other out, leaving only the missing elements in the final XOR result.

// Here's an example explanation for a 5-year-old:

// Imagine you have a group of friends, and each friend has a different number written on their hand. But one of your friends is missing, and you don't know their number. You want to find out which friend is missing.

// To solve this, you start with a special number called "missing" set to 0. You go to each friend one by one and ask them to do a special handshake with you. During the handshake, you and your friend show your hands and compare the numbers written on them. Then you do something called XOR with your number and your friend's number. This XOR operation gives you a new number.

// After going through all your friends, you look at the final number you got by doing XOR with each friend. This number is special because it is the number of your missing friend! The reason it works is that when you XOR a number with itself, it becomes 0. So all the friends who are not missing will cancel each other out, and you will be left with only the missing friend's number.

// So by doing these special handshakes and XORing the numbers, you can find out who your missing friend is!



// #include <stdio.h>

// void findMissingElements(int arr[], int size) {
//     int xor_result = 0;

//     // Perform XOR of all array elements
//     for (int i = 0; i < size; i++) {
//         xor_result ^= arr[i];
//     }

//     // Perform XOR with numbers from 1 to n
//     for (int i = 1; i <= size + 1; i++) {
//         xor_result ^= i;
//     }

//     // XOR result contains the missing element(s)
//     int rightmost_set_bit = xor_result & -xor_result;

//     int missing1 = 0, missing2 = 0;

//     // Divide elements into two groups based on rightmost set bit
//     for (int i = 0; i < size; i++) {
//         if (arr[i] & rightmost_set_bit) {
//             missing1 ^= arr[i];
//         } else {
//             missing2 ^= arr[i];
//         }
//     }

//     // Perform XOR with numbers from 1 to n
//     for (int i = 1; i <= size + 1; i++) {
//         if (i & rightmost_set_bit) {
//             missing1 ^= i;
//         } else {
//             missing2 ^= i;
//         }
//     }

//     printf("Missing elements: %d and %d\n", missing1, missing2);
// }

// int main() {
//     int arr[] = {1, 4, 3, 6, 2, 7, 8};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     findMissingElements(arr, size);

//     return 0;
// }

#include <stdio.h>

void findMissingElements(int arr[], int size) {
    int xor_result = 0;

    // Perform XOR of all array elements
    for (int i = 0; i < size; i++) {
        xor_result ^= arr[i];
    }

    // Perform XOR with numbers from 1 to n+1
    for (int i = 1; i <= size + 1; i++) {
        xor_result ^= i;
    }

    // XOR result contains the missing element(s)
    printf("Missing element(s): %d\n", xor_result);
}

int main() {
    int arr[] = {1, 4, 3, 6, 2, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    findMissingElements(arr, size);

    return 0;
}



// Given an array arr[] of size N-1 with integers in the range of [1, N], 
// the task is to find the missing number from the first N integers.

////////////////////////////////////
//1
////////////////////////////////////

// #include <stdio.h>

// void findMissing(int arr[], int N)
// {
// 	int temp[N + 1];
// 	for (int i = 0; i <= N; i++) {
// 		temp[i] = 0;
// 	}

// 	for (int i = 0; i < N; i++) {
// 		temp[arr[i] - 1] = 1;
// 	}

// 	int ans;
// 	for (int i = 0; i <= N; i++) {
// 		if (temp[i] == 0)
// 			ans = i + 1;
// 	}
// 	printf("%d", ans);
// }

// /* Driver code */
// int main()
// {
// 	int arr[] = { 1, 3, 7, 5, 6, 2 };
// 	int n = sizeof(arr) / sizeof(arr[0]);
// 	findMissing(arr, n);
// }





/////////////////////////////////////
//2
////////////////////////////////////

// #include <stdio.h>

// // Function to find the missing number
// int getMissingNo(int a[], int n)
// {
// 	int i, total;
// 	total = (n + 1) * (n + 2) / 2;
// 	for (i = 0; i < n; i++)
// 		total -= a[i];
// 	return total;
// }

// // Driver code
// void main()
// {
// 	int arr[] = { 1, 2, 3, 5 };
// 	int N = sizeof(arr) / sizeof(arr[0]);

// 	// Function call
// 	int miss = getMissingNo(arr, N);
// 	printf("%d", miss);
// }
