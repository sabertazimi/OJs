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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector< vector<int> > res;
        vector<int> path;
        dfs(root, sum, path, res);
        return res;
    }
private:
    void dfs(TreeNode *root, int sum, vector<int> path, vector< vector<int> > &res) {
        if (!root) {
            return;
        }

        if (!root->left && !root->right && root->val == sum) {
            path.push_back(root->val);
            res.push_back(path);
            return;
        }

        int nextSum = sum - root->val;
        path.push_back(root->val);
        dfs(root->left, nextSum, path, res);
        dfs(root->right, nextSum, path, res);
    }
};
