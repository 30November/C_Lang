#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node* left;
	struct node* right;
};

typedef struct node TREE;

void display(TREE *t)
{
	//Inorder
	if (t != NULL)
	{
		display(t->left);
		printf("%d ",t->data);
		display(t->right);
	}
	
}
int main()
{
	TREE* root=malloc(sizeof(TREE));
	scanf("%d",&root->data,printf("Enter root's data:"));
	(root->left)->data=10;
	(root->right)->data=50;
	
	display(root);

	return 0;	
}

//#define cal(x) (x)*(x)
//#include <stdio.h>
//#include <math.h>
//#include <string.h>
//#include <limits.h>
//#include <ctype.h>
//#include <stdbool.h>
//#include <stdlib.h>
