class Solution {
public:
    int findMin(vector<int>& nums) {
        int size = nums.size();

        if (size == 0) {
            return 0;
        } else if (size == 1) {
            return nums[0];
        } else if (size == 2) {
            return min(nums[0], nums[1]);
        }

        int lo = 0;
        int hi = size - 1;

        while (lo + 1 < hi) {
            if (nums[lo] < nums[hi]) {
                return nums[lo];
            }

            int mid = (lo + hi) / 2;
            if (nums[lo] < nums[mid]) {
                lo = mid;
            } else if (nums[lo] > nums[mid]) {
                hi = mid;
            } else {
                lo++;
            }
        }

        return min(nums[lo], nums[hi]);
    }
};
