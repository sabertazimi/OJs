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
    bool hasPathSum(TreeNode* root, int sum) {
        if (!root) {
            return false;
        }

        return dfs(root, sum);
    }
private:
    bool isLeaf(TreeNode *root) {
        return !root->left && !root->right;
    }

    bool dfs(TreeNode *root, int sum) {
        if (!root) {
            return false;
        }

        if (root && isLeaf(root)) {
            if (sum == root->val) {
                return true;
            } else {
                return false;
            }
        }

        int nextSum = sum - root->val;
        return dfs(root->left, nextSum) || dfs(root->right, nextSum);
    }
};
