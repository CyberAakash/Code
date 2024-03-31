package Zoho.newworld;

import java.util.*;
import java.io.*;

public class AlternatePositionStart {

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
