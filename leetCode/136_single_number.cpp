class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int sz = static_cast<int>(nums.size());

        if (sz == 0) {
        	return 0;
        }

        for (int i = 1; i < sz; ++i) {
        	nums[0] ^= nums[i];
        }

        return nums[0];
    }
};
