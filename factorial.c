#include <stdio.h>
int factorial(int *x);
int factorial(int *x)
{
	if (*x==1)
	return 1;
	else
	{
	int f=(*x-1);
	return (*x*factorial(&f));
	}
}
int main()
{
	int num;
	printf("Enter the number to find its factorial:");
	scanf("%d",&num);
	printf("%d",factorial(&num));
	return 0;	
}
