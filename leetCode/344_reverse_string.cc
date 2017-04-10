class Solution {
public:
    string reverseString(string s) {
        int n = s.length();
        int lo = 0;
        int hi = n - 1;

        while (lo < hi) {
            swap(s[lo++], s[hi--]);
        }

        return s;
    }
};
