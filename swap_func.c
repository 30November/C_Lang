#include <stdio.h>
void swap(int *x,int *y);
void swap(int *x,int *y)
{
	int c;
	c=*x;
	*x=*y;
	*y=c;
	printf("\n%d %d",*x,*y);
}

main()
{
	int a=2,b=3;
	swap(&a,&b);
	printf("\n%d %d",a,b);
}
