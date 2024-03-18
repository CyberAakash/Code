package Zoho.newworld;

public class EquilibriumIndex {
    public static void main(String[] args) {
        int nums[] = {-7, 1, 5, 2, -4, 3, 0};
        int len = nums.length;

        // Method 1
        // for (int i = 0; i < len; i++) {
        //     int sum1 = 0, sum2 = 0;
        //     if (i == 0) {
        //         sum1 = 0;
        //     } else {
        //         for (int j = 0; j < i; j++) {
        //             sum1 += nums[j];
        //         }
        //     }

        //     if (i == len - 1) {
        //         sum2 = 0;
        //     } else {
        //         for (int j = i + 1; j <= len - 1; j++) {
        //             sum2 += nums[j];
        //         }
        //     }

        //     if (sum1 == sum2) {
        //         System.out.print(i);
        //         break;
        //     }
        // }

        // Method 2 
        int sum = 0, pot = 0;
        for (int num : nums) {
            sum += num;
        }

        for (int i = 0; i < len; i++) {
            sum -= nums[i];
            if (sum == pot) {
                System.out.print(i);
                break;
            }
            pot += nums[i];

        }

    }
}
