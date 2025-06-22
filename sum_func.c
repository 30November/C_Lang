#include <stdio.h>
void sum(int a,int b);
void sum(int a,int b)
{
	printf("The sum is %d",a+b);
}

main()
{
	int x=2,y=3;
	sum(x,y);
}
