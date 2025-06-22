#include <stdio.h>
int main()
{
	int row,column,i,j;
	printf("Enter the rows:");
	scanf("%d",&row);
	column=2*row-1;
	for (i=1;i<=row;i++)
	{
		for (j=1;j<=column;j++)
		{
			if (j<=i || j>=column+1-i)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}



    return 0;
}
