/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int pathSum(TreeNode* root, int sum) {
        if (!root) {
            return 0;
        }

        return dfs(root, 0, sum) + pathSum(root->left, sum) + pathSum(root->right, sum);
    }
private:
    int dfs(TreeNode *root, int preSum, int &sum) {
        if(!root) {
            return 0;
        }

        int curSum = preSum + root->val;
        return (curSum == sum) + dfs(root->left, curSum, sum) + dfs(root->right, curSum, sum);
    }
};

// class Solution {
// public:
//     int pathSum(TreeNode* root, int sum) {
//         int res = 0;
//         unordered_map<int, int> prev_sums;
//         prev_sums[0] = 1;
//         dfs(root, prev_sums, 0, res, sum);
//         return res;
//     }

//     void dfs(TreeNode* root, unordered_map<int, int> &prev_sums, int cur_sum, int &res, int sum){
//         if(root == NULL) return;
//         cur_sum = cur_sum + root->val;
//         if(prev_sums.find(cur_sum - sum) != prev_sums.end()){
//             res += prev_sums[cur_sum - sum];
//         }
//         prev_sums[cur_sum]++;
//         dfs(root->left, prev_sums, cur_sum, res, sum);
//         dfs(root->right, prev_sums, cur_sum, res, sum);
//         prev_sums[cur_sum]--;
//     }
// };
