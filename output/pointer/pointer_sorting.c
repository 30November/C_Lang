#include <stdio.h>
void sort(int n,int *x);
void sort(int n,int *x)
{
	//bubble sort
	int i,j,temp;
	for (i=0;i<n;i++)
	{
		for (j=0;j<n-i-1;j++)
		{
			if (*(x+j) > *(x+j+1))
			{
				temp = *(x+j);
				*(x+j) = *(x+j+1);
				*(x+j+1) = temp;
			}
			
		}
	}
}

main()
{
	int a[5]={5,3,1,2,4};
	sort(5,a);
	
	int i;
	for (i=0;i<5;i++)
	printf("%d ",a[i]);
}

