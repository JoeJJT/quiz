/* FIXME: Implement! */

#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
	int data;
	struct TreeNode *right;
	struct TreeNode *left;
};

struct TreeNode *preorder(TreeNode *root);
void flatten(struct TreeNode *root);

int main()
{
    return 0;
}

void flatten(struct TreeNode *root) {
	TreeNode *tmp = (TreeNode *)malloc(sizeof(TreeNode));
	if(tmp == NULL) {
		TreeNode *head;
		tmp = preorder(root);
		head = tmp;
	}
	else{
		tmp->next = preorder(root); 
	}
}

TreeNode *preorder(TreeNode *root) {
	if(root == NULL) {
		return NULL;
	}
	else {
		TreeNode *rightTree = root->right;
		TreeNode *leftTree = root->left;

		if(leftTree != NULL) {
			TreeNode *tail = leftTree->left;
			tail->right = root;
			leftTree->left = root;
			TreeNode *list = rightTree;
			while(list->right != NULL) {
				list = list->right;
			}
			list->right = ;
			perorder(leftTree->right);
		}
		if(rightTree != NULL) {
			rightTree = preorder(rightTree);
		}
	}
	return root;
}
