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

// class Solution {
// public:
//     vector<int> inorderTraversal(TreeNode *root) {
//         vector<int> vector;
//         if(!root)
//         return vector;
//         stack<TreeNode *> stack;
//         stack.push(root);
//         while(!stack.empty())
//         {
//             TreeNode *pNode = stack.top();
//             if(pNode->left)
//             {
//                 stack.push(pNode->left);
//                 pNode->left = NULL;
//             }
//             else
//             {
//                 vector.push_back(pNode->val);
//                 stack.pop();
//                 if(pNode->right)
//                 stack.push(pNode->right);
//             }
//         }
//         return vector;
//     }
// };
