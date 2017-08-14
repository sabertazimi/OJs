class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
    	int sz = static_cast<int>(nums.size());
    	vector<int> res;

    	if (sz <= 0) {
    		return res;
    	}

    	unordered_map<int, bool> mp;

    	for (auto& el : nums) {
    		mp[el] = true;
    	}

    	for (int i = 1; i <= sz; ++i) {
    		if (mp.find(i) == mp.end()) {
    			res.push_back(i);
    		}
    	}

    	return res;
    }
};
