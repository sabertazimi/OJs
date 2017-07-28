class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ret;

        if (nums.size() <= 2) {
            return ret;
        }

        sort(nums.begin(), nums.end());

        for (int i = 0; i < (int)nums.size() - 2; i++) {
            // no answer
            if (nums[i] > 0) {
                break;
            }

            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k) {
                vector<int> cur;

                if (nums[i] + nums[j] + nums[k] == 0) {
                    cur.push_back(nums[i]);
                    cur.push_back(nums[j]);
                    cur.push_back(nums[k]);
                    ret.push_back(cur);
                    j++;
                    k--;
                    // skip dup
                    while (j < k && nums[j - 1] == nums[j]) {
                        j++;
                    }
                    while (j < k && nums[k] == nums[k + 1]) {
                        k--;
                    }

                } else if (nums[i] + nums[j] + nums[k] < 0) {
                    j++;
                } else {
                    k--;
                }

            }

            // skip dup
            while (i < (int)nums.size() - 2 && nums[i] == nums[i + 1]) {
                i++;
            }
        }

        return ret;
    }
};
