#include <stdio.h>
#include <math.h>
int main()
{
	int m1[2][3]={{1,2,3},{4,5,6}};
	int m2[2][3]={{6,5,4},{3,2,1}};
	
	int *p1=&m1[0][0],*p2=&m2[0][0];
	
	int m[2][3];//resultant matrix
	int i,j;
	
	for (i=0;i<2;i++)
	{
		for (j=0;j<3;j++)
		{
			m[i][j] = *(p1+3*i+j) + *(p2+3*i+j);
		}
	}
	
	printf("Matrix Addition:\n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<3;j++)
		printf("%d ",m[i][j]);
		printf("\n");
	}
	
	

	return 0;	
}
