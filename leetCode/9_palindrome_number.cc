class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        // change x to string
        string s1;
        stringstream ss;
        ss << x;
        ss >> s1;

        string s2 = s1;
        reverse(s2.begin(), s2.end());

        if (s1 == s2) {
            return true;
        } else {
            return false;
        }
    }
private:
    int reverse(int x) {
        long long res = 0;

        while (x) {
            res = res * 10 + (x % 10);
            x /= 10;
        }

        return (int)res;
    }
};
