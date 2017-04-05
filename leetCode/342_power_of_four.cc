class Solution {
public:
    bool isPowerOfFour(int num) {
        // num & (num - 1) => power of 2
        // (num - 1) % 3 => 1 on odd bit
        return num > 0 && (num & (num - 1)) == 0 && (num - 1) % 3 == 0;
    }
};
