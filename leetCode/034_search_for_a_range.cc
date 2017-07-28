class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res(2, -1);

        if (nums.empty()) {
            return res;
        }

        int lo = 0;
        int hi = nums.size() - 1;
        int mid;
        bool find = false;

        while (lo <= hi) {
            mid = (lo + hi) / 2;

            if (nums[mid] == target) {
                find = true;
                break;
            } else if (nums[mid] < target) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }

        if (!find) {
            return res;
        }

        res[0] = mid;
        res[1] = mid;

        int left = 0;
        for (int i = mid - 1; i >= 0; i--) {
            if (nums[i] != nums[mid]) {
                break;
            }

            left++;
        }

        int right = 0;
        for (int i = mid + 1; i < (int)(nums.size()); i++) {
            if (nums[i] != nums[mid]) {
                break;
            }

            right++;
        }

        res[0] -= left;
        res[1] += right;

        return res;
    }
};
