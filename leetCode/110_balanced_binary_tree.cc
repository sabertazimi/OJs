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
    bool isBalanced(TreeNode* root) {
        return dfs(root);
    }
private:
    int depth(TreeNode *root) {
        if (!root) {
            return 0;
        }

        return 1 + max(depth(root->left), depth(root->right));
    }
    bool dfs(TreeNode *root) {
        if (!root) {
            return true;
        }

        if ((depth(root->left) > depth(root->right) + 1) || (depth(root->right) > depth(root->left) + 1)) {
            return false;
        }

        return dfs(root->left) && dfs(root->right);
    }
};
