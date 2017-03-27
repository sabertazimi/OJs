class NumArray {
public:
    NumArray(vector<int> nums) {
        accu.push_back(0);
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            accu.push_back(accu.back() + nums[i]);
        }
    }

    int sumRange(int i, int j) {
        return accu[j+1] - accu[i];
    }
private:
    vector<int> accu;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */
