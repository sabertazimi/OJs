class Solution {
public:
    bool isPalindrome(string s) {
    	int len = static_cast<int>(s.length());

    	if (len <= 1) return true;

    	transform(s.begin(), s.end(), s.begin(), ::tolower);

    	for (int i = 0, j = len - 1; i < j; ++i, --j) {
    		while (!::isalnum(s[i])) ++i;
    		while (!::isalnum(s[j])) --j;
    		if (i < j && s[i] != s[j]) return false;
    	}

        return true;
    }
};
