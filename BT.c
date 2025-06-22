#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *left;
	struct node *right;
} *root=NULL;

typedef struct node NODE;


void insert(NODE *p)
{
	if (p)
	{
		int op;
		printf("Where to go 1.left 2.right:");
		if (op==1) 
		{if (p->left) insert(p->left);
		else replace(p->left);
		}
		else 
		{if (p->right) insert(p->right);
		else replace(p->right);}
	}
	else replace(p);
	
	
}

void replace(NODE *r)
{
	NODE *temp=malloc(sizeof(NODE));
	temp->left=NULL;
	temp->right=NULL;
	scanf("%d",&temp->data,printf("Enter the data:"));
	r=temp;
}

void display(NODE *p)
{
 	if (p)
	{
	display(p->left);
	printf("%d ",p->data);
	display(p->right);
	}
}

int main()
{
	int op;
	label:
	printf("1.Insert 2.Display 3.Exit");
	scanf("%d",&op);
	if (op==1) insert(root);
	if (op==2) display(root);
	if (op==3) return 0;
	goto label;
	
}
