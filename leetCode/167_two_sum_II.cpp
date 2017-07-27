class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
    	vector<int> res;
    	int sz = static_cast<int>(numbers.size());

    	if (sz <= 0) {
    		return res;
    	}

    	int i = 0;
    	int j = sz - 1;

    	while (i < j) {
    		int sum = numbers[i] + numbers[j];
    		if (sum == target) {
    			res.push_back(i+1);
    			res.push_back(j+1);
    			break;
    		} else if (sum < target) {
    			++i;
    		} else {
    			--j;
    		}
    	}

    	return res;
    }
};
