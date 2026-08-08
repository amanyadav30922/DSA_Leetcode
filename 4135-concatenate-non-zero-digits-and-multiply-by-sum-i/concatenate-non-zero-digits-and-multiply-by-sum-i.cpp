
class Solution {
public:
    long long sumAndMultiply(int n) {
        int x = 0;
        int sum = 0;
        int p = 1;

        while (n > 0) {
            int digit = n % 10;
            n /= 10;

            if (digit != 0) {
                sum += digit;

                x += digit * p;
                p *= 10;
            }
        }

        return 1LL * x * sum;
    }
};
