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
  int longestConsecutive(TreeNode* root) {
    if (!root) {
        return 0;
    }

    int res = 1;
    dfs(root, res);
    return res;
}
private:
    int decreasingParentToChild(TreeNode *root, int val) {
        if (!root || root->val != val - 1) {
            return 0;
        }

        return 1 + max(decreasingParentToChild(root->left,root->val),decreasingParentToChild(root->right,root->val));
    }

    int increasingParentToChild(TreeNode *root, int val) {
        if (!root || root->val != val + 1) {
            return 0;
        }

        return 1 + max(increasingParentToChild(root->left, root->val), increasingParentToChild(root->right, root->val));
    }

    void dfs(TreeNode *root, int &res) {
        if (!root) {
            return;
        }

        int left_dec = decreasingParentToChild(root->left, root->val);
        int left_inc = increasingParentToChild(root->left, root->val);
        int right_dec = decreasingParentToChild(root->right, root->val);
        int right_inc = increasingParentToChild(root->right, root->val);
        res = max(res, left_dec + 1 + right_inc);
        res = max(res, left_inc + 1 + right_dec);
        dfs(root->left, res);
        dfs(root->right, res);
    }
};
