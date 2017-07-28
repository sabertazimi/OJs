class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ret;

        if (nums.size() <= 3) {
            return ret;
        }

        sort(nums.begin(), nums.end());

        for (int i = 0; i < (int)nums.size() - 3; i++) {
            if (i > 0 && nums[i - 1] == nums[i]) {
                continue;
            }

            for (int j = i + 1; j < (int)nums.size() - 2; j++) {
                if (j > i + 1 && nums[j - 1] == nums[j]) {
                    continue;
                }

                int k = j + 1;
                int l = nums.size() - 1;

                while (k < l) {
                    int sum = nums[i] + nums[j] + nums[k] + nums[l];

                    if (sum == target) {
                        vector<int> cur;
                        cur.push_back(nums[i]);
                        cur.push_back(nums[j]);
                        cur.push_back(nums[k]);
                        cur.push_back(nums[l]);
                        ret.push_back(cur);
                        k++;
                        l--;

                        // skip dup
                        while (k < l && nums[k - 1] == nums[k]) {
                            k++;
                        }
                        while (k < l && nums[l] == nums[l + 1]) {
                            l--;
                        }
                    } else if (sum < target) {
                        k++;
                    } else {
                        l--;
                    }
                }
            }
        }

        return ret;
    }
};

