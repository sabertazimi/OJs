class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();

        if (n == 1) {
            return 0;
        }

        int lo = 0;
        int hi = n - 1;
        int mid = 0;

        while (lo <= hi) {
            int mid = (lo + hi) / 2;

            if ((mid == 0 || nums[mid] >= nums[mid - 1])
                && (mid == n - 1 || nums[mid] >= nums[mid + 1])) {
                return mid;
            } else if (mid > 0 && nums[mid - 1] > nums[mid]) {
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }

        return mid;
    }
};
