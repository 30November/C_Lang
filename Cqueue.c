#include <stdio.h>
#include <math.h>
#include <string.h>
#define max 5
//q
int front=-1,rear=-1;
int queue[max];

void enqueue()
{	
	int item;
	if (front==(rear+1)%max) printf("Overflow");
	else{ if (front==-1) front=0;
	scanf("%d",&item,printf("Enter the item:"));
	rear=(rear+1)%max;
	queue[rear]=item;}
}
void dequeue()
{
	if (front==-1)
	printf("underflow");
	else{	printf("Popped item:%d",queue[front]);
		//Future prediction of queue
		if(front==rear) front=rear=-1;
		else front=(front+1)%max;
	}
}

void display()
{
	if (front==-1) printf("EMPTY");
	else { int i=front;
	while (i!=rear)  //Think about it later
	{printf("%d ",queue[i]);
	i=(i+1)%max;}
	printf("%d ",queue[rear]);}
}

int main()
{
	label:
	printf("\n1.Enqueue 2.Dequeue 3.Display 4.Exit");
	int op; scanf("%d",&op,printf(" ->"));
	if (op==1) enqueue();
	if (op==2)	dequeue();
	if (op==3) display();
	if (op==4) return 0;
	goto label;	
}
