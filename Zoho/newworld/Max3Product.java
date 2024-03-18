package Zoho.newworld;

import java.util.Arrays;

public class Max3Product {
    public static void main(String[] args) {
        // int[] arr = { 1, -2, -1, -9, -8, 3 };
        // int len = arr.length;
        // System.out.println("Before");
        // System.out.println(Arrays.toString(arr));
        // for (int i = 0; i < len - 1; i++) {
        // if (arr[i] > arr[i + 1]) {
        // int temp = arr[i];
        // arr[i] = arr[i + 1];
        // arr[i + 1] = temp;

        // i = -1; // 强制跳回
        // }
        // }
        // System.out.println("After");
        // System.out.println(Arrays.toString(arr));

        // // int max = arr[len-1] * arr[len-2] * arr[len-3];
        // if(arr[len-1]>= 0 && arr[1] < 0 ) {
        // int max1 = arr[len-1] * arr[len-2] * arr[len-3];
        // int max2 = arr[0] * arr[1] * arr[len-1];
        // if(max1 > max2) {
        // System.out.println(max1);
        // } else {
        // System.out.println(max2);
        // }
        // } else {
        // System.out.println(arr[len - 1] * arr[len - 2] * arr[len - 3]);
        // }

        int[] arr = { -1, 2, -1, 9, 8, -3 };

        int max1 = Integer.MIN_VALUE, max2 = Integer.MIN_VALUE, max3 = Integer.MIN_VALUE;
        int min1 = Integer.MAX_VALUE, min2 = Integer.MAX_VALUE;

        for (int num : arr) {
            if (num > max1) {
                max3 = max2;
                max2 = max1;
                max1 = num;
            } else if (num > max2) {
                max3 = max2;
                max2 = num;
            } else if (num > max3) {
                max3 = num;
            }

            if (num < min1) {
                min2 = min1;
                min1 = num;
            } else if (num < min2) {
                min2 = num;
            }
        }

        int maxProduct = Math.max(max1 * max2 * max3, max1 * min1 * min2);
        System.out.println("Maximum Product: " + maxProduct);
    }

}
