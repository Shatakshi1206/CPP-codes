class Solution {
public:
    long long int factorial(int n) {
        long long int result = 1;
        for (int i = 2; i <= n; ++i) {
            result *= i;
        }
        return result;
    }

    int trailingZeroes(int n) {
        int count = 0;
        for (long long int i = 5; n / i >= 1; i *= 5) {
            count += n / i;
        }
        return count;
    }
};
