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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        traversal(root, res);
        return res;
    }

private:
    void traversal(TreeNode *root, vector<int> &res) {
        if (root == NULL) {
            return;
        }

        res.push_back(root->val);
        traversal(root->left, res);
        traversal(root->right, res);
    }
};

// class Solution {
// public:
//     vector<int> preorderTraversal(TreeNode *root) {
//         if (root==NULL) {
//             return vector<int>();
//         }
//         vector<int> result;
//         stack<TreeNode *> treeStack;
//         treeStack.push(root);
//         while (!treeStack.empty()) {
//             TreeNode *temp = treeStack.top();
//             result.push_back(temp->val);
//             treeStack.pop();
//             if (temp->right!=NULL) {
//                 treeStack.push(temp->right);
//             }
//             if (temp->left!=NULL) {
//                 treeStack.push(temp->left);
//             }
//         }
//         return result;
//     }
// };
