class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
        for (auto k = 0; !strs.empty(); ++k) {
            for (auto& s : strs ) {
            	if (s.length() <= k || strs[0][k] != s[k]) {
               		return s.substr(0, k);
            	}
            }
        }

        return "";
    }
};
