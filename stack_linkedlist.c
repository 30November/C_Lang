#include <stdio.h>
#include <stdlib.h>
struct node 
{
	int data;
	struct node * next;
} *top=NULL;

typedef struct node NODE;

void push()
{
	NODE *temp=malloc(sizeof(NODE));
	scanf("%d",&temp->data,printf("Enter the data:"));
	temp->next=top;
	top=temp;
}

void pop()
{
	if (top)
	{
	printf("Popped item:%d",top->data);
	top=top->next;
	}
	else
	printf("EMPTY");
}

void display()
{
	NODE *p=top;
	while(p)
	{
	printf("%d ",p->data);
	p=p->next;
	}
	
}

int main()
{
//	menu driven
	while (1) {
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Stop\n");
        int op;
        scanf("%d", &op);

        if (op == 1) {
            push();
        } else if (op == 2) {
            pop();
        } else if (op == 3) {
            display();
        } else {
            break;
        }
        printf("\n");
    }

    return 0;	
}
