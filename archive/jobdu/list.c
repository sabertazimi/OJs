#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int val;
	struct node *next;
} node;

node *list_sort(node *head) {
	if (head->next == NULL || head->next->next == NULL) {
		return head;
	}

	node *left = head->next->next;
	head->next->next = NULL;
	node *h_trav = head->next;
	node *prev = head;
	node *l_head = left;

	while (left) {
		for (prev = head, h_trav = head->next, l_head = left; h_trav && h_trav->val < l_head->val; prev = h_trav, h_trav = h_trav->next) {
			;
		}

		left = left->next;

		prev->next = l_head;
		l_head->next = h_trav;
	}

	return head;
}

int main(void) {
	int n = 0;
	node *head = (node *)malloc(sizeof(node));

	while (scanf("%d", &n) != EOF) {
  	    head->val = 0;
	    head->next = NULL;

		for (int i = 0; i < n; ++i) {
			int val = 0;
			scanf("%d", &val);

			node *cur = (node *)malloc(sizeof(node));
			cur->val = val;

			cur->next = head->next;
			head->next = cur;
		}

		head = list_sort(head);

		for (node *trav = head->next; trav != NULL; trav = trav->next) {
			printf("%d", trav->val);

			if (trav->next) {
				printf(" ");
			}
		}
		
		printf("\n");
	}

	return 0;
}