package Zoho.newworld;

import java.util.Arrays;

public class MatrixAdjacentReplace {
    public static void main(String[] args) {
        int[][] arr = { { 1, 0, 0 }, { 1, 1, 0 }, { 0, 1, 0 } };
        int len = arr.length;
        System.out.println("Before");
        for (int i = 0; i < len; i++) {
            for (int j = 0; j < len; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
        for (int i = 0; i < len; i++) {
            for (int j = 0; j < len; j++) {
                int val = arr[i][j];
                if (val == 1) {
                    if (i + 1 < len && arr[i + 1][j] != 1) {
                        arr[i + 1][j] = 0;
                    }
                    if (i - 1 >= 0 && arr[i - 1][j] != 1) {
                        arr[i - 1][j] = 0;
                    }
                    if (j + 1 < len && arr[i][j + 1] != 1) {
                        arr[i][j + 1] = 0;
                    }
                    if (j - 1 >= 0 && arr[i][j - 1] != 1) {
                        arr[i][j - 1] = 0;
                    }
                }
            }
        }
        System.out.println("After");
        for(int i=0; i<len; i++) {
            for(int j=0; j<len; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
    }
}
