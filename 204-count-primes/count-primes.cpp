class Solution {
public:
    int countPrimes(int n) {
        if (n < 2) {
            return 0;
        }
        vector<bool> isPrime(n, true);
        isPrime[0] = isPrime[1] = false; // not prime numbers
        for (int i = 2; i < sqrt(n) + 1; i++) {
            if (isPrime[i]) {
                long temp = i * i;
                while (temp < n) {
                    isPrime[temp] = false;
                    temp +=i;
                }
            }
        }
        int count = 0;
        for (int i = 2; i < n; i++) {
            if (isPrime[i]) {
                count++;
            }
        }
        return count;
    }
};