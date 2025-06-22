#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

void display(struct node *head)
{
	struct node *p=head;
	while (p != NULL){
		printf("%d ",p->data);
		p=p->next;}
}


struct node* insertF(struct node *p)
{
	while (1){
	int val;
	scanf("%d",&val,printf("Enter:"));
	if (val==-1) break;
	struct node *temp=malloc(sizeof(struct node));
	temp->data=val;
	temp->next=p;
	p=temp;}
	return p;
	
}

struct node* insertL(struct node *p)
{
	//error
	struct node* f;
	while (1){
	int val;
	scanf("%d",&val,printf("Enter:"));
	if (val==-1) break;
	struct node *temp=malloc(sizeof(struct node));
	temp->data=val;
	temp->next=NULL;
	f=temp;
	f=f->next;}
	return p;
	
}
int main()
{	
	struct node *head = NULL;
	head=insertF(head);
	display(head);
	
	struct node *p = head;
	struct  node *q= NULL;
	while (p)
	{	
		if (p->data>30)
		{
			if (p==head) head=head->next;
			else q->next=p->next;
		}
		q=p;
		p=p->next;
	}
	printf("\n");
	display (head);
	return 0;	
}
