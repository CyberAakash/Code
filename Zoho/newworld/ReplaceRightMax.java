package Zoho.newworld;

import java.util.Arrays;

// 1. Replace every element with the greatest element on right side
// Last Updated: 06-05-2019
// Given an array of integers, replace every element with the next greatest element (greatest element on the right side) in the array. Since there is no element next to the last element, replace it with -1. For example, if the array is {16, 17, 4, 3, 5, 2}, then it should be modified to {17, 5, 5, 5, 2, -1}

public class ReplaceRightMax {
    public static void main(String[] args) {


        // Method 1
        // int arr[] = { 16, 17, 4, 3, 5, 2 };
        // int len = arr.length;

        // for(int i = 0; i < len-2; i++) {
        //     int max = arr[i+1];
        //     for(int j = i+2; j < len; j++) { 
        //         if(arr[j] > max) {
        //             max = arr[j];
        //         }
        //     }
        //     arr[i] = max;
        // }
        // arr[len-2] = arr[len-1];
        // arr[len-1] = -1;
        // for(int i=0;i<arr.length;i++) {

        // System.out.print(arr[i]);
        // }


        // Method 2
        int arr[] = { 16, 17, 4, 3, 5, 2 };
        System.out.println(Arrays.toString(arr));
        int len = arr.length;
        int max = -1;
        for(int i = len-1; i >= 0; i--) {
            int value = arr[i];
            arr[i] = max;
            max = Math.max(max, value);
        }
        System.out.println(Arrays.toString(arr));
    }
}
