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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if (postorder.size() <= 0) {
            return NULL;
        }

        int pivot = postorder[postorder.size() - 1];
        int index = idxSearch(inorder, pivot);
        int leftLen = index;
        int rightLen = postorder.size() - leftLen - 1;

        vector<int> leftInorder;
        vector<int> leftPostorder;
        vector<int> rightInorder;
        vector<int> rightPostorder;

        if (leftLen != 0) {
            leftInorder = vector<int> (inorder.begin(), inorder.begin() + leftLen);
            leftPostorder = vector<int> (postorder.begin() , postorder.begin() + leftLen);
        }

        if (rightLen != 0) {
            rightInorder = vector<int> (inorder.begin() + 1 + leftLen, inorder.end());
            rightPostorder = vector<int> (postorder.begin() + leftLen, postorder.end() - 1);
        }

        TreeNode* node = new TreeNode(pivot);
        node->left = buildTree(leftInorder, leftPostorder);
        node->right = buildTree(rightInorder, rightPostorder);

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

        for (int i = n - 1; i >= 0; i--) {
            if (nums[i] == target) return i;
        }

        return -1;
    }
};
