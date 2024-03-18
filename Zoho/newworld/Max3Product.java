package Zoho.newworld;

import java.util.Arrays;

public class Max3Product {
    public static void main(String[] args) {
        int[] arr = { 1, -2, -3, 4, 1, 2, -9 };
        int len = arr.length;
        System.out.println("Before");
        System.out.println(Arrays.toString(arr));
        for (int i = 0; i < len - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;

                i = -1; // 强制跳回
            }
        }
        System.out.println("After");
        System.out.println(Arrays.toString(arr));

        // int max = arr[len-1] * arr[len-2] * arr[len-3];
        if(arr[len-1]>= 0 && arr[1] < 0 ) {
            int max1 = arr[len-1] * arr[len-2] * arr[len-3];
            int max2 = arr[0] * arr[1] * arr[len-1];
            if(max1 > max2) {
                System.out.println(max1);
            } else {
                System.out.println(max2);
            }
        } else {
            System.out.println(arr[len - 1] * arr[len - 2] * arr[len - 3]);
        }
    }

}
