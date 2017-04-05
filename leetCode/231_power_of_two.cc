class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) {
            return false;
        }

        int res = n & (-n);
        int minus = n - res;

        return minus == 0;
    }
};
