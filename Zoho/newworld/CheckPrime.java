package Zoho.newworld;

public class CheckPrime {

    public static boolean isPrime(int n) {
        if (n <= 1) {
            return false; // 1 and negative numbers are not prime
        }
        if (n <= 3) {
            return true; // 2 and 3 are prime
        }
        if (n % 2 == 0 || n % 3 == 0) {
            return false; // Any number divisible by 2 or 3 is not prime (except 2 and 3 themselves)
        }

        // Check divisibility by numbers of the form 6k ± 1, up to the square root of n
        for (int i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0) {
                return false; // If n is divisible by any of these numbers, it's not prime
            }
        }

        return true; // If no divisor is found, n is prime
    }

    public static void main(String[] args) {
        int[] numbers = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31 }; // Prime numbers for testing
        for (int num : numbers) {
            System.out.println(num + " is prime: " + isPrime(num));
        }

        int[] nonPrimes = { 4, 6, 8, 9, 10, 12, 14, 15, 16, 18, 20 }; // Non-prime numbers for testing
        for (int num : nonPrimes) {
            System.out.println(num + " is prime: " + isPrime(num));
        }
    }
}
