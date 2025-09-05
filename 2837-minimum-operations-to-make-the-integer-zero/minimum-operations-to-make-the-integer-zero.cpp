class Solution {
public:
    int makeTheIntegerZero(int num1, int num2) {
        for (int k = 1; k <= 60; k++) {
            long long x = (long long)num1 - (long long)num2 * k;

            if (x < k) continue;

            int bits = 0;
            long long temp = x;
            while (temp > 0) {
                if (temp & 1) bits++;
                temp >>= 1;
            }

            if (bits <= k) {
                return k;
            }
        }
        return -1;
    }
};
