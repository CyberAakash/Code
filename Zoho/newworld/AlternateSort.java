package Zoho.newworld;

import java.util.*;

public class AlternateSort {
    public static void main(String[] args) {
        int[] nums = new int[] { 1, 2, 3, 4, 5, 6, 7 };

        int len = nums.length;
        int[] res = new int[len];

        int i = 0, j = len - 1;
        int cn = 0;
        while (i < j) {
            res[cn++] = nums[j--];
            res[cn++] = nums[i++];
        }
        if (len % 2 != 0) {
            res[cn] = nums[i];
        }

        System.out.println(Arrays.toString(res));
    }
}
