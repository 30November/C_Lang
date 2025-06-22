#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node* left;
	struct node* right;
};

typedef struct node TREE;

TREE *node(int val)
{
	TREE* temp=malloc(sizeof(TREE));
	temp->data=val;
	temp->right=NULL;
	temp->left=NULL;
	return temp;
		
}

void display(TREE *t)
{
	//Inorder
	if (t)
	{
		display(t->left);
		printf("%d ",t->data);
		display(t->right);
	}	
}

TREE *insert(int val,TREE *root)
{
	if (root)
	{
		if (root->data<val) root->right= insert(val,root->right);
		else root->left = insert(val,root->left);	
	}
	else return node(val);	
}
int main()
{
	TREE *root=NULL;
	int i,v;
	for(i=0;i<10;i++){
	scanf("%d",&v,printf("Enter the no."));
	root=insert(v,root);}
	//display
	display(root);
	return 0;	
}


