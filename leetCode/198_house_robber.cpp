class Solution {
public:
    int rob(vector<int>& nums) {
    	int curNo = 0;
    	int curYes = 0;

    	for (int n : nums) {
    		int tmp = curNo;
    		curNo = max(curNo, curYes); 	// no rob current house
    		curYes = n + tmp;				// rob current house
    	}

    	return max(curNo, curYes);
    }
};
