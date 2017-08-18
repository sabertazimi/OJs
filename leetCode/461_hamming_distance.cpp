class Solution {
public:
    int hammingDistance(int x, int y) {
        int res = 0;

        while (x || y) {
            int xx = x & 0x1;
            int yy = y & 0x1;

            res += (xx != yy);

            x >>= 1;
            y >>= 1;
        }

        return res;
    }

    // int hammingDistance(int x, int y) {
    //     int dist = 0, n = x ^ y;

    //     while (n) {
    //         ++dist;
    //         n &= n - 1;
    //     }
        
    //     return dist;
    // }
};
