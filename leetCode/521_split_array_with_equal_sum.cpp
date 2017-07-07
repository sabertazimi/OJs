class Solution {
public:
    bool splitArray(vector<int>& nums) {
       if (nums.size() < 7) {
            return false;
        }

        int left = 1, mid = 3, right = nums.size() - 2;
        int sum1 = nums[0], sum2 = nums[2], sum4 = nums[nums.size() - 1];

        int sum3 = 0;
        for (int i = mid + 1; i < right; i++) {
            sum3 += nums[i];
        }

        while (left < right) {
            // move left and right pointer
            if (sum1 < sum4) {
                sum1 += nums[left];
                left++;
                sum2 -= nums[left];
            } else if (sum1 > sum4) {
                sum4 += nums[right];
                right--;
                sum3 -= nums[right];
            } else {
                // move mid pointer
                while (mid < right - 2 && (sum2 + nums[mid]) <= (sum3 - nums[mid + 1])) {
                    sum2 += nums[mid];
                    mid++;
                    sum3 -= nums[mid];
                }

                if (sum2 == sum1 && sum2 == sum3) {
                    return true;
                }

                sum1 += nums[left];
                left++;
                sum2 -= nums[left];
            }
        }

        return false;
    }
};
