#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

typedef struct TreeNode {
    int data;
    struct TreeNode *leftNode;
    struct TreeNode *rightNode;
};

static double diff_in_second(struct timespec t1,struct timespec t2)
{

    struct timespec diff;
    if(t2.tv_nsec - t1.tv_sec < 0) {
        diff.tv_sec = t2.tv_sec -t1.tv_sec - 1;
        diff.tv_nsec = t2.tv_nsec - t1.tv_nsec + 1000000000;
    } else {
        diff.tv_sec = t2.tv_sec - t1.tv_sec;
        diff.tv_nsec = t2.tv_nsec - t1.tv_nsec;
    }
    return (diff.tv_sec + diff.tv_nsec / 1000000000.0);
}

TreeNode *InsertLeftNode(int data,TreeNode *e)
{
    e->leftNode = (TreeNode*)malloc(sizeof(TreeNode));
    e = e->leftNode;
    e->data = data;
    e->leftNode = NULL;
	e->rightNode = NULL:
    return e;
}

TreeNode *InsertRightNode(int data,TreeNode *e)
{
    e->rightNode = (TreeNode*)malloc(sizeof(TreeNode));
    e = e->rightNode;
    e->data = data;
    e->leftNode = NULL;
    e->rightNode = NULL;
    return e;
}

TreeNode *CreateTestCase() {
	/*Create test case
	*			1
	*	   	   / \
	*		  2   5
	*		 / \   \
	*       3   4   6
	*/
	int testdata[] = {1,2,3,4,5,6}
	TreeNode *node_1 = (TreeNode*)malloc(sizeof(TreeNode));
	node_1->data = testdata[1];
	node_1->leftNode = (TreeNode*)malloc(sizeof(TreeNode));
	node_1->rightNode = (TreeNode*)malloc(sizeof(TreeNode));
	TreeNode *node_2 = node_1->leftNode;
	node_2->data = testdata[2];
	node_2->leftNode = (TreeNode*)malloc(sizeof(TreeNode));
	node_2->rightNode = (TreeNode*)malloc(sizeof(TreeNode));
	TreeNode *node_3 = node_2->leftNode;
	node_3->data = testdata[3];
	node_3->leftNode = NULL;
	node_3->rightNode = NULL;
	TreeNode *node_4 = node_2->rightNode;
	node_4->data = testdata[4];
	node_4->leftNode = NULL;
	node_4->rightNode = NULL;
	TreeNode *node_5 = node_1->rightNode;
	node_5->data = testdata[5];
	node_5->leftNode = NULL;
	node_5->rightNode = (TreeNode*)malloc(sizeof(TreeNode));
	TreeNode *node_6 = node_5->rightNode;
	node_6->data = testdata[6];
	node_6->rightNode = NULL;
	node_6->leftNode = NULL;
}

int main()
{
    double elapsed_time,total_time = 0;
    struct timespec start ,end;
    FILE *fp = fopen("result.txt","a");

#if define(REC)
    flatten(TreeNode *root);
#endif
#if define(ITER)
    flatten(TreeNode *root);
#endif
    void FreeTestCase(TreeNode *root) {
        if(root == NULL) {
            return;
        }

        FreeTestCase(root->left);
        FreeTestCase(root->right);

        free(head);
    }
    printf("Total time: %1f secs\n,total_time");
    return 0;
}
