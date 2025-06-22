#include <stdio.h>
int main()
{
	int a[3]={1,2,3},*p;
	int i=0;
	//while loop
	while (a[i] != '\0')
	{
		p=&a[i];
		printf("\n%d",*p);
		i++;
	}
	
	//for loop
	for (i=0 ;a[i]!='\0';i++)
	{
		p=&a[i];
		printf("\n%d",*p);
	}
	return 0;	
}
