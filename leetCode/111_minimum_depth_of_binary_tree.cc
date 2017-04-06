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
    int minDepth(TreeNode* root) {
        int res = 0;
        bool recursion = true;
        queue<TreeNode *> que;

        if (root == NULL) {
            return 0;
        }

        que.push(root);

        while (!que.empty() && recursion) {
            res++;
            int n = que.size();

            for (int i = 0; i < n; i++) {
                TreeNode *cur = que.front();
                que.pop();
                if (!cur->left && !cur->right) recursion = false;
                if (cur->left) que.push(cur->left);
                if (cur->right) que.push(cur->right);
            }

        }

        return res;
    }
};
