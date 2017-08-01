class Solution {
public:
    int addDigits(int num) {
    	while (num > 9) {
    		int next = 0;

    		while (num > 0) {
    			next += (num % 10);
    			num /= 10;
    		}

    		num = next;
    	}

    	return num;

    	// return 1 + (num - 1) % 9;
    }
};
