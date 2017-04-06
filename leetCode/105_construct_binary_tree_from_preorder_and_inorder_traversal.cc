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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if (preorder.size() <= 0) {
            return NULL;
        }

        int pivot = preorder[0];
        int index = idxSearch(inorder, pivot);
        int leftLen = index;
        int rightLen = preorder.size() - leftLen - 1;

        vector<int> leftPreorder;
        vector<int> leftInorder;
        vector<int> rightPreorder;
        vector<int> rightInorder;

        if (leftLen != 0) {
            leftPreorder = vector<int> (preorder.begin() + 1, preorder.begin() + leftLen + 1);
            leftInorder = vector<int> (inorder.begin(), inorder.begin() + leftLen);
        }

        if (rightLen != 0) {
            rightPreorder = vector<int> (preorder.begin() + 1 + leftLen, preorder.end());
            rightInorder = vector<int> (inorder.begin() + 1 + leftLen, inorder.end());
        }

        TreeNode *left = buildTree(leftPreorder, leftInorder);
        TreeNode *right = buildTree(rightPreorder, rightInorder);
        TreeNode *node = new TreeNode(pivot);
        node->left = left;
        node->right = right;
        return node;
    }
    void show(TreeNode *root) {
        if (root == NULL) return;
        cout << "root: " << (root->val) << endl;
        cout << "left: ";
        show(root->left);
        cout << endl;
        cout << "right: ";
        show(root->right);
        cout << endl;
    }
private:
    /**
     * search for target
     * @param  nums   array
     * @param  target target element
     * @return        index of target element
     */
    int idxSearch(vector<int>& nums, int target) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] == target) return i;
        }

        return -1;
    }
};
