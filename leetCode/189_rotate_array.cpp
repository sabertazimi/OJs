class Solution {
public:
	void rotate(vector<int>& nums, int k) {
		int n = static_cast<int>(nums.size());

		if (n < 2) {
			return;
		}

		k = k % n;
		reverse(nums.begin(), nums.begin() + n - k);
		reverse(nums.begin() + n - k, nums.begin() + n);
		reverse(nums.begin(), nums.begin() + n);
	}
};
