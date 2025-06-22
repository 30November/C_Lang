#include <stdio.h>
#include <math.h>
#include <string.h>
#define max 5
//fake circular queue
//inspire by python lover
int rear=-1; 
int queue[max];

void enqueue()
{	
	if (rear==max-1) printf("Overflow");
	else {
		int item;
		scanf("%d",&item,printf("Enter the item:"));
		queue[++rear]=item;
	}
}
void dequeue()
{
	if (rear==-1)
	printf("underflow");
	else
	{
		int i;
		printf("Popped item:%d",queue[0]);
		for (i=0;i<=rear;i++)
		queue[i]=queue[i+1];
		rear--;
	}
}

void display()
{
	if (rear==-1) printf("EMPTY");
	else {
		int i;
		for (i=0;i<=rear;i++)
		printf("%d ",queue[i]);
	}
}

int main()
{
	
	int op;
	label:
	printf("1.Enqueue\n");
	printf("2.Dequeue\n");
	printf("Display\n");
	printf("4.Exit\n");
	scanf("%d",&op,printf("Enter the choice:"));
	if (op==1) enqueue();
	if (op==2)	dequeue();
	if (op==3) display();
	if (op==4) return 0;
	printf("\n");
	goto label;	
}
