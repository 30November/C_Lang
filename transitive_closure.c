#include <stdio.h>

void display(int n,int mat[][n][n],int k)
{
	int i,j;
	printf("T:%d\n",k);
	for (i=1;i<=n;i++)
	{
	for (j=1;j<=n;j++)
	printf("%d ",mat[k][i][j]);
	printf("\n");
	}
}

void compute(int n,int mat[][n][n],int k)
{
	int i,j;
	for (i=1;i<=n;i++)
	for (j=1;j<=n;j++)
	mat[k][i][j]=mat[k-1][i][j]?1:mat[k-1][i][k]&mat[k-1][k][j];
	
	display(n,mat,k);
}

int main()
{
	int i,j,k,n;
	scanf("%d",&n,printf("Enter the size"));
	int mat[n+1][n][n];
	printf("Enter the edges:\n");
	for (i=1;i<=n;i++)
	for (j=1;j<=n;j++)
	{
		if (i!=j) scanf("%d",&mat[0][i][j],printf("%c->%c:",i+64,j+64));
		else mat[0][i][j] = 1;
	}
	
	printf("GIVEN\n");
	display(n,mat,0);
	
	for (k=1;k<=n;k++) compute(n,mat,k);
	
	return 0;
}
