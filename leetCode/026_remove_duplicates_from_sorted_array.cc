class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int res = 0;
        int n = nums.size();

        if (n == 0) {
            return res;
        }

        for (int i = 1; i < n; i++) {
            if (nums[res] != nums[i]) {
                nums[++res] = nums[i];
            }
        }

        return res+1;
    }
};
