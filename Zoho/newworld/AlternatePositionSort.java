package Zoho.newworld;

import java.util.*;
import java.io.*;

public class AlternatePositionSort {

    // Method 1
    public static void main(String[] args) {
        int[] arr = new int[] { 1, 2, 3, 4, 5, 6, 7, 8 };
        System.out.println("Original Array: " + Arrays.toString(arr));

        int temp;
        for (int i = 0; i < arr.length - 1; i += 2) {
            for (int j = i + 2; j < arr.length; j += 2) {
                if (arr[i] < arr[j]) {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        for (int i = 1; i < arr.length - 1; i += 2) {
            for (int j = i + 2; j < arr.length; j += 2) {
                if (arr[i] > arr[j]) {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        System.out.println("Sorted Array: " + Arrays.toString(arr));
    }

    // Method 2
    // public static void main(String[] args) {
    //     int[] arr = new int[] {1,2,3,4,5,6,7,8};
    //     System.out.println("Original Array:" + Arrays.toString(arr));

    //     List<Integer> oddList = new ArrayList<Integer>();
    //     List<Integer> evenList = new ArrayList<Integer>();

    //     for(int i = 0; i < arr.length; i++) {
    //         if(i % 2 == 0) {
    //             evenList.add(arr[i]);
    //         } else {
    //             oddList.add(arr[i]);
    //         }
    //     }

    //     Collections.sort(evenList, Collections.reverseOrder());
    //     Collections.sort(oddList);
    //     int p = 0, q = 0;
    //     for(int i = 0; i < arr.length; i++) {
    //         if (i % 2 == 0) {
    //             arr[i] = evenList.get(p++);
    //         } else {
    //             arr[i] = oddList.get(q++);
    //         }
    //     }

    //     System.out.println("Sorted Array:" + Arrays.toString(arr));

    // }
}






// OPTIMIZED VERSION
// import java.util.Arrays;

// public class Main {
//     public static void main(String[] args) {
//         int[] arr = new int[] { 1, 2, 3, 4, 5, 6, 7, 8 };
//         System.out.println("Original Array: " + Arrays.toString(arr));

//         // Sort even indexed elements in descending order
//         sortSubArray(arr, 0, true);

//         // Sort odd indexed elements in ascending order
//         sortSubArray(arr, 1, false);

//         System.out.println("Sorted Array: " + Arrays.toString(arr));
//     }

//     private static void sortSubArray(int[] arr, int startIndex, boolean descending) {
//         // Collect the subarray
//         int length = (arr.length - startIndex + 1) / 2;
//         int[] subArray = new int[length];
//         for (int i = 0; i < length; i++) {
//             subArray[i] = arr[startIndex + 2 * i];
//         }

//         // Sort the subarray
//         Arrays.sort(subArray);

//         // Reverse the array if we need it in descending order
//         if (descending) {
//             for (int i = 0; i < length / 2; i++) {
//                 int temp = subArray[i];
//                 subArray[i] = subArray[length - 1 - i];
//                 subArray[length - 1 - i] = temp;
//             }
//         }

//         // Place sorted elements back to their original positions
//         for (int i = 0; i < length; i++) {
//             arr[startIndex + 2 * i] = subArray[i];
//         }
//     }
// }
