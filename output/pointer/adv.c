#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
	int a[3]={5,6,7};
	//array of pointer
	int *p1[3]; p1[0]=&a[0]; p1[1]=&a[1]; p1[2]=&a[2];
	printf("%d %d %d\n",*p1[0],*p1[1],*p1[2]);
	//pointer to an array
	int (*p2)[3]=&a;
	printf("%d %d %d",(*p2)[0],(*p2)[1],(*p2)[2]);
	

	return 0;	
}
