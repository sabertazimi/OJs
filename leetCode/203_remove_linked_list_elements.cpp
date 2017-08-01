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
	ListNode* removeElements(ListNode* head, int val) {
		while (head && head->val == val) {
			head = head->next;
		}

		if (head == nullptr) {
			return head;
		}

		ListNode* prev = head;
		ListNode* cur = head->next;

		while (cur) {
			if (cur->val == val) {
				prev->next = cur->next;
				cur = cur->next;
			} else {
				prev = prev->next;
				cur = cur->next;
			}
		}

		return head;
	}

	// ListNode *removeElements(ListNode *head, int val)
	// {
	// 	ListNode **list = &head;

	// 	while (*list != nullptr)
	// 	{
	// 		if ((*list)->val == val)
	// 		{
	// 			*list = (*list)->next;
	// 		}
	// 		else
	// 		{
	// 			list = &(*list)->next;
	// 		}
	// 	}

	// 	return head;
	// }
};
