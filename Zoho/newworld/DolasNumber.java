package Zoho.newworld;

import java.util.Scanner;

public class DolasNumber {
    public static void main(String[] args) {
        DolasNumber dolasNumber = new DolasNumber();
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        if (isDolasNumber(num)) {
            System.out.println("True");
        } else {
            System.out.println("False");
        }
    }

    private static boolean isDolasNumber(int num) {
        int isPrime = 1;
        int cnt = 0;
        boolean flag = false;
        for (int i = 2; i <= num; i++) {
            if (num % i == 0) {
                isPrime = 1;
                for (int j = 2; j <= i / 2; j++) {
                    if (i % j == 0) {
                        isPrime = 0;
                        break;
                    }
                }
                if (isPrime == 1) {
                    cnt++;
                    System.out.print(i + " ");
                    if(i == 2 || i == 3) {
                        flag = true;
                    } else {
                        flag = false;
                    }
                }
            }
        }
        System.out.println("Count: "+ cnt);
        return flag;
    }
}
