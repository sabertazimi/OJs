class Solution {
public:
	int majorityElement(vector<int>& nums) {
		unordered_map<int, int> counts; 
		int sz = nums.size();

		for (int i = 0; i < sz; ++i) {
			if (++counts[nums[i]] > sz / 2) {
				return nums[i];
			}
		}
	}
};
