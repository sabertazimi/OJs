class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.length();

        if (n == 0 || k == 0) {
            return s;
        }

        for (int i = 0, k2 = k * 2; i < n; i += k2) {
            int lo = i;
            int hi = ((i + k < n) ? (i + k) : n);
            reverse(s.begin() + lo, s.begin() + hi);
        }

        return s;
    }
};
