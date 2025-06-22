#include <stdio.h>
int main()
{
	int m[2][3]={{1,2,3},{4,5,6}};
	int *p; p=&m[0][0]; //here u can't take p=m ,since 2d array
	int i,j;
	
	for (i=0;i<2;i++)
	{
		for (j=0;j<3;j++)
		printf("%d ", *(p+3*i+j)); //here 3*i+j making an AP series
		printf("\n");
	}
	
	/*here in above we can't take *(p+i+j) bcoz
	i+j will give series like 0,1,2,1,2,3*/
	

	return 0;	
}
