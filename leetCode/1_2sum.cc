class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret;

        if (nums.size() <= 1) {
            return ret;
        }

        unordered_map<int, int> umap;

        // record position
        for (int i = 0; i < (int)nums.size(); i++) {
            umap[nums[i]] = i;
        }

        for (int i = 0; i < (int)nums.size(); i++) {
            int rest = target - nums[i];

            if (umap.find(rest) != umap.end()) {
                int index = umap[rest];

                if (index == i) {
                    continue;
                } else if (index < i) {
                    // order output
                    ret.push_back(index);
                    ret.push_back(i);
                    return ret;
                } else {
                    // order output
                    ret.push_back(i);
                    ret.push_back(index);
                    return ret;
                }
            }
        }
    }
};
