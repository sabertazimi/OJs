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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        traversal(root, res);
        return res;
    }

private:
    void traversal(TreeNode *root, vector<int> &res) {
        if (root == NULL) {
            return;
        }

        traversal(root->left, res);
        res.push_back(root->val);
        traversal(root->right, res);
    }
};
