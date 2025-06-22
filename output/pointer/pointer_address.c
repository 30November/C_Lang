#include <stdio.h>
int *add(int *x,int *y);
int *add(int *x,int *y)
{
	int *c,sum;
	sum = *x + *y;
	c = &sum;
	return c;	
}

int main()
{
	int *r;
	int a=2,b=3;
	r=add(&a,&b);
	printf("Address:%u\n",&r);
	printf("Sum:%d\n",*r);
}
