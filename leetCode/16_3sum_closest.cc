class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        if (nums.size() <= 2) {
            return -1;
        }

        sort(nums.begin(),nums.end());

        int ret = 0;
        int distance = INT_MAX;

        for (int i = 0; i < (int)(nums.size() - 2); i++) {
            int j = i + 1;
            int k = nums.size() - 1;

            while (j < k) {
                int tmp_val = nums[i] + nums[j] + nums[k];
                int tmp_distance;

                if (tmp_val < target) {
                    tmp_distance = target - tmp_val;

                    if (tmp_distance < distance) {
                        distance = tmp_distance;
                        ret = tmp_val;
                    }

                    j++;
                } else if (tmp_val > target) {
                    tmp_distance = tmp_val - target;

                    if (tmp_distance < distance) {
                        distance = tmp_distance;
                        ret = tmp_val;
                    }

                    k--;
                } else {
                    ret = tmp_val;
                    return ret;
                }
            }
        }

        return ret;
    }
};
