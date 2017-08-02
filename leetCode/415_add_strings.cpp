class Solution {
public:
    string addStrings(string num1, string num2) {
    	int l1 = num1.size() - 1;
    	int l2 = num2.size() - 1;
    	string res = "";
    	int carry = 0;

    	while (l1 >= 0 || l2 >= 0 || carry != 0) {
	    	int sum = 0;

    		if (l1 >= 0) {
    			sum += num1[l1] -'0';
    			--l1;
    		}

    		if (l2 >= 0) {
    			sum += num2[l2] -'0';
    			--l2;
    		}

    		sum += carry;
    		carry = sum / 10;
    		sum %= 10;
    		res += to_string(sum);
    	}

    	reverse(res.begin(), res.end());
    	
    	return res;
    }
};
