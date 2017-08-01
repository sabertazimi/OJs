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
    vector<string> binaryTreePaths(TreeNode* root) {
    	vector<string> res;

    	if (root == nullptr) {
    		return res;
    	}

    	dfs(res, root, to_string(root->val));

    	return res;

    }
private:
	void dfs(vector<string>& res, TreeNode* root, string str) {
		if (root->left == nullptr && root->right == nullptr) {
			res.push_back(str);
			return;
		}

		if (root->left) {
			dfs(res, root->left, str + "->" + to_string(root->left->val));
		}

		if (root->right) {
			dfs(res, root->right, str + "->" + to_string(root->right->val));
		}
	}
};
