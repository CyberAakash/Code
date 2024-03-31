package Zoho.newworld;

class CountPrimes {

    public int countPrimes(int n) {
        if (n <= 2)
            return 0;

        boolean[] isPrime = new boolean[n + 1];
        int cnt = n - 2;

        for (int i = 2; i * i < n; i++) {
            if (!isPrime[i]) {
                for (int j = i * 2; j < n; j += i) {
                    if (!isPrime[j]) {
                        isPrime[j] = true;
                        cnt--;
                    }
                }
            }
        }
        return cnt;
    }

    public static void main(String[] args) {
        CountPrimes solution = new CountPrimes();
        System.out.println(solution.countPrimes(10)); // Output: 4
        System.out.println(solution.countPrimes(0)); // Output: 0
        System.out.println(solution.countPrimes(1)); // Output: 0
    }
}
