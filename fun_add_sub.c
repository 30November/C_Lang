#include <stdio.h>
void add (int x,int y);
void sub (int x,int y);
void add (int x,int y)
{
	printf("%d+%d=%d",x,y,x+y);
}
void sub (int x,int y){
	printf("%d-%d=%d",x,y,x-y);
}

int main()
{
	int a=20,b=10;
	sub(a,b);
	add(a,b);
	return 0;	
}
