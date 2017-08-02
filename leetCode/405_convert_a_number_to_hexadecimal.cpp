class Solution {
public:
    string toHex(int num) {
    	if (num == 0) {
    		return "0";
    	}

    	string res;
    	int cnt = 0;

    	while (num && cnt < 8) {
    		res = HEX[(num & 0xf)] + res;
    		num >>= 4;
    		++cnt;
    	}

    	return res;
    }
private:
	const string HEX = "0123456789abcdef";
};
