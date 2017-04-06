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
    vector< vector<int> > zigzagLevelOrder(TreeNode* root) {
        vector < vector<int> > res;

        if (root == NULL) {
            return res;
        }

        stack<TreeNode *> st;
        st.push(root);
        int level = 0;

        while (!st.empty()) {
            level++;
            int n = st.size();
            vector<int> row;
            queue<TreeNode *> que;

            for (int i = 0; i < n; i++) {
                TreeNode* node = st.top();
                st.pop();
                row.push_back(node->val);
                que.push(node);
            }

            n = que.size();
            for (int i = 0; i < n; i++) {
                TreeNode* node = que.front();
                que.pop();
                if (level % 2) {
                    if (node->left) st.push(node->left);
                    if (node->right) st.push(node->right);
                } else {
                    if (node->right) st.push(node->right);
                    if (node->left) st.push(node->left);
                }

            }

            res.push_back(row);
        }

        return res;
    }
};
