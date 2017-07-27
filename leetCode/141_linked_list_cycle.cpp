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
    bool hasCycle(ListNode *head) {
    	if (head == nullptr || head->next == nullptr) {
    		return false;
    	}

    	for (ListNode* slow = head, * fast = head->next; slow != fast; slow = slow->next, fast = fast->next->next) {
    		if (fast == nullptr || fast->next == nullptr) {
    			return false;
    		}
    	}

    	return true;
    }
};
