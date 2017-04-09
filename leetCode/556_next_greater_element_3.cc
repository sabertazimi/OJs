class Solution {
public:
    int nextGreaterElement(int n) {
        int max = (numeric_limits<int>::max)();

        if (n == max) {
            return -1;
        }

        if (n & (1 << 30)) {
            return ((n << 1) | 0x1);
        } else {
            return (n << 1);
        }
    }
private:
    int bitCount(unsigned int n) {
        int res = 0;

        while (n) {
            res += n & 1;
            n >>= 1;
        }

        return res;
    }
};
