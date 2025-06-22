#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node * next;
}*f=NULL,*r;

typedef struct node NODE;

void enqueue()
{
	NODE *temp=malloc(sizeof(NODE));
	temp->next=NULL;
	scanf("%d",&temp->data,printf("Enter the data:"));
	if (f==NULL ) f=r=temp;
	else {r->next=temp;r=temp;}
	
}


void dequeue()
{
	NODE *p=f;
	if (p) {printf("dequeue item:%d",f->data);f=f->next; free(p); }
	else printf("NO ELEMENTS");
	
}

void display()
{
	NODE *q=f;   
	while (f)
	{
		printf("%d ",f->data);
		f=f->next;
	}
	f=q;
}

int main(){
    int op;
    label:
    printf("\n1.Enqueue 2.Dequeue 3.Display 4.Exit");
    scanf("%d",&op,printf("-> "));
    if (op == 1) enqueue();
    else if (op == 2) dequeue();
    else if(op == 3) display();
    else if (op == 4) return;
    goto label;

}
