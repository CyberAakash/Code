package Zoho.newworld;

import java.util.Arrays;
import java.util.Scanner;

public class Frequency1toP {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the value of N:");
        int N = scanner.nextInt();
        System.out.println("Enter the value of P:");
        int P = scanner.nextInt();

        int[] arr = new int[N];
        System.out.println("Enter the array elements:");
        for (int i = 0; i < N; i++) {
            arr[i] = scanner.nextInt();
        }

        int[] cnt = new int[N];
        Arrays.fill(cnt, 0);

        int cn = 1;
        for (int i = 0; i < N && cn <= P; i++) {
            if (cn == arr[i]) {
                cnt[cn - 1]++;
            }
            if (i == N - 1) {
                i = -1;
                cn++;
            }
        }

        for (int i = 0; i < N; i++) {
            System.out.print(cnt[i] + " ");
        }

        scanner.close();
    }
}
