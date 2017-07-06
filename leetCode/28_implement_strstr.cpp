class Solution {
public:
    int strStr(string haystack, string needle) {
    	int pos = -1;

    	return ((pos = haystack.find(needle)) != string::npos) ? pos : -1;
    }
};
