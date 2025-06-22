#include <stdio.h>

void display(int n,int mat[n][n])
{
	int i,j;
	for (i=1;i<=n;i++)
	{
	for (j=1;j<=n;j++)
	printf("%d ",mat[i][j]);
	printf("\n");
	}
	printf("\n");
}

void compute(int n,int mat[n][n],int k)
{
	int i,j;
	for (i=1;i<=n;i++)
	{
	for (j=1;j<=n;j++)
	{
	if (i==j || i==k || j==k) continue;
	
	if(mat[i][j]>(mat[i][k]+mat[k][j])) 
	mat[i][j]=mat[i][k]+mat[k][j];
	}
	}
}

int main()
{
	int i,j,n,k;
	scanf("%d",&n,printf("Enter the size"));
	int mat[n][n];
	printf("Enter the edges:\n");
	for (i=1;i<=n;i++)
	for (j=1;j<=n;j++)
	{
		if (i!=j) scanf("%d",&mat[i][j],printf("%c->%c:",i+64,j+64));
		else mat[i][j] = 0;
	}
	
	printf("GIVEN\n");
	display(n,mat);
	
	for (k=1;k<=n;k++) compute(n,mat,k);
	
	printf("ANS\n");
	display(n,mat);
	return 0;
}
