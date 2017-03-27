class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int res = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] == val) {
                continue;
            }

            nums[res] = nums[i];
            res++;
        }

        return res;
    }
};
