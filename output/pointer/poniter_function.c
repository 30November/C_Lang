#include <stdio.h>
int * add(int a,int b);
int main()
{
	int a=2,b=3;
	printf("Sum:%d",add(a,b));

	return 0;	
}

int add(int a,int b)
{
	int *c;
	*c=a+b;
	return c;
}
