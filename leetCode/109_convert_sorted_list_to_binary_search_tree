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
    TreeNode* sortedListToBST(ListNode* head) {
    	int cnt = 0;
    	ListNode* trav = head;

    	while (trav != NULL) {
    		trav = trav->next;
    		cnt++;
    	}

    	// key: take (cnt - 1) as parameter, not cnt
    	return dfs(head, 0, cnt - 1);
    }
private:
	TreeNode* dfs(ListNode* head, int lo, int hi) {
		if (head == NULL || lo > hi) {
			return NULL;
		}

		int mid = (lo + hi) / 2;
		ListNode* trav = head;

		for (int i = 0; i < mid; ++i) {
			trav = trav->next;
		}

		TreeNode* root = new TreeNode(trav->val);
		root->left = dfs(head, lo, mid - 1);
		root->right= dfs(head, mid + 1, hi);
		return root;
    }
};
