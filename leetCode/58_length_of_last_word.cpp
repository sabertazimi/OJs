class Solution {
public:
    int lengthOfLastWord(string s) {
    	int cnt = 0;
    	int len = static_cast<int>(s.length());

    	while (len > 0 && s[len-1] == ' ') {
    		--len;
    	}

    	for (int i = 0; i < len; ++i) {
    		if (s[i] != ' ') {
    			++cnt;
    		}  else {
    			cnt = 0;
    		}
    	}

    	return cnt;
    }
};
