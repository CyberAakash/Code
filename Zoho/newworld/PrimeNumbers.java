package Zoho.newworld;

public class PrimeNumbers {

    public static void displayPrimesUpToN(int n) {
        if (n < 2) {
            System.out.println("There are no prime numbers up to " + n);
            return;
        }

        System.out.println("Prime numbers up to " + n + ":");
        for (int i = 2; i <= n; i++) {
            if (isPrime(i)) {
                System.out.print(i + " ");
            }
        }
        System.out.println();
    }

    public static boolean isPrime(int n) {
        if (n <= 1) {
            return false;
        }
        if (n <= 3) {
            return true;
        }
        if (n % 2 == 0 || n % 3 == 0) {
            return false;
        }
        for (int i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        displayPrimesUpToN(10); // Display prime numbers up to 10
        displayPrimesUpToN(20); // Display prime numbers up to 20
    }
}
