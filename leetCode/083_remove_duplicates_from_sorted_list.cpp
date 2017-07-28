/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
    	for (ListNode* trav = head; trav != NULL && trav->next != NULL;) {
    		if (trav->val == trav->next->val) {
    			trav->next = trav->next->next;
    		} else {
    			trav = trav->next;
    		}
    	}

    	return head;
    }
};
