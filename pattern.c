#include <stdio.h>
int main()
{
	int n,i,j,c=0;
	printf("Enter the term");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		
		for (j=n;j>0;j--)
		{
			if (j<=i)
			printf("* ");
			else
			printf(" ");
		}
		printf("\n");
	}
	return 0;	
}
