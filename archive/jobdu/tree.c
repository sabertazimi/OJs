#include <stdio.h>
#include <stdlib.h>


typedef struct node {
	char val;
	struct node *left;
	struct node *right;
} node, *tree;

char buf[110];
int idx;

tree create(char *buf) {
	if (buf[idx] == '#') {
		++idx;
		return NULL;
	}

	node *root = (node *)malloc(sizeof(node));
	root->val = buf[idx];
	++idx;
	root->left = create(buf);
	root->right = create(buf);
	return root;
}

void preorder(tree bst) {
	if (bst == NULL) {
		return ;
	}

	preorder(bst->left);
	printf("%c ", bst->val);
	preorder(bst->right);
}

int main(void) {
	while (scanf("%s", buf) != EOF) {
		idx = 0;
		tree bst = (tree)malloc(sizeof(node));
		bst = create(buf);
		preorder(bst);
		printf("\n");
	}
}