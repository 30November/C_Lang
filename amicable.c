#include <stdio.h>
int main()
{
	int i,j,k,sum,sum1;
	for (i=1;i<10001;i++)
	{
		sum=0;
		sum1=0;
		for (j=1;j<i;j++)
		{
			if (i%j==0)
			sum=sum+j;
		}
		
	
		for (k=1;k<sum;k++)
		{
			if (sum%k==0)
			sum1=sum1+k;
		}

	if (i==sum1 && i<sum)
	printf("(%d,%d)\n",i,sum);
	}
	return 0;	
}
