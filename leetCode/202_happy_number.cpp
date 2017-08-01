class Solution {
public:
    bool isHappy(int n) {
    	int slow = n;
    	int fast = n;

    	do {
    		slow = squareNum(slow);
    		fast = squareNum(squareNum(fast));
    	} while (slow != fast);

    	if (slow == 1) {
    		return true;
    	} else {
    		return false;
    	}
    }
private:
	int squareNum(int n) {
		int sum = 0;

		while (n) {
			sum += (n % 10) * (n % 10);
			n /= 10;
		}

		return sum;
	}
};
