#include <stdio.h>
int main()
{
	int n;
	int i,j,count;
	for (i=1;i<4;i++)
	{
		count=i;
		for (j=1;j<=2*i-1;j++)
		{
		printf("%d",count++);
		printf("\n");
		}
	}
	

	return 0;	
}
