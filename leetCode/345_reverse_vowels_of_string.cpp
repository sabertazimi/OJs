class Solution {
public:
    string reverseVowels(string s) {
    	int lo = 0;
    	int hi = s.size() - 1;

    	while (lo < hi) {
    		while (!isVowel(s[lo])) {
    			++lo;
    		}

    		while (!isVowel(s[hi])) {
    			--hi;
    		}

    		if (lo < hi) {
    			swap(s[lo], s[hi]);
    			++lo;
    			--hi;
    		}
    	}

    	return s;
    }
private:
	bool isVowel(char ch) {
		return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'
		|| ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
	}
};
