#include <stdio.h>
#define max 5
//queue
int front=-1,rear=-1,queue[max];

void enqueue()
{	
	int item;
	if (rear==max-1) printf("Overflow");
	else {
	if (front==-1) front=0;
	scanf("%d",&item,printf("Enter the item:"));
	queue[++rear]=item;}
}

void dequeue()
{
	if (rear<front) printf("underflow");
	else printf("Popped item:%d",queue[front++]);
}

void display()
{
	int i;
	if (rear<front) printf("EMPTY");
	else for (i=front;i<=rear;i++) printf("%d ",queue[i]);
}

int main()
{
	label:
	printf("\n1.Enqueue 2.Dequeue 3.Display 4.Exit");
	int op; scanf("%d",&op,printf(" ->"));
	if (op==1) enqueue();
	else if (op==2)	dequeue();
	else if (op==3) display();
	else if (op==4) return 0;
	goto label;	
}
