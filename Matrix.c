#include <stdio.h>
//function
void matrix_i(int x,int y,int m[x][y]);
void matrix_o(int x,int y,int m[x][y]);
void matrix_m(int x1,int x,int x2,int m1[x1][x],int m2[x][x2]);
void matrix_a(int x,int y,int m1[x][y],int m2[x][y]);
void matrix_t(int x,int y,int m[x][y]);
int main()
{
	int r1,c1,r2,c2;
	printf("Enter the order of Matrix1:");scanf("%d%d",&r1,&c1);
	printf("Enter the order of Matrix2:");scanf("%d%d",&r2,&c2);
	int a[r1][c1],b[r2][c2];
	matrix_i(r1,c1,a);
	matrix_o(r1,c1,a);
	matrix_i(r2,c2,b);
	matrix_o(r2,c2,a);
	//if (c1==r2)
	//matrix_m(r1,c1,c2,a,b);
	if (r1==r2 && c1==c2)matrix_a(r1,c1,a,b);
	else printf("Not possible");
//	if (r1==c1);
//	matrix_t(r1,c1,a);
	return 0;
}

void matrix_i(int x,int y,int m[x][y])
{
	int i,j;
	printf("Enter the elements (Matrix):");
	for (i=0;i<x;i++)
	{
		for (j=0;j<y;j++)
		scanf("%d",&m[i][j]);
	}
}
void matrix_o(int x,int y,int m[x][y])
{
	
	int i,j;
	printf("Matrix:\n");
	for (i=0;i<x;i++)
	{
		for (j=0;j<y;j++)
		printf("%d ",m[i][j]);
		printf("\n");
	}
}
	
void matrix_m(int x1,int x,int x2 ,int m1[x1][x], int m2[x][x2])
{
    int i, j, k, mlt[x1][x2];

    for (i = 0; i < x1; i++) {
        for (j = 0; j < x2; j++) 
		{
            mlt[i][j] = 0;
            for (k = 0; k < x; k++) 
			{
                mlt[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
	printf("Multipliaction of MAtrix");
    matrix_o(x1,x2, mlt);
}

void matrix_a(int x, int y, int m1[x][y], int m2[x][y])
{
	int i,j,mlt[x][y];
	
	for (i = 0; i < x; i++) 
	{
		for (j = 0; j < y; j++)
		mlt[i][j] = m1[i][j] + m2[i][j];
	}
	printf("Addition of Matrix:\n");
	matrix_o(x,y,mlt);
	
}

void matrix_t(int x,int y,int m[x][y])
{
	int i,j,t[x][y];
	for (i=0;i<x;i++)
	{
		for (j=0;j<y;j++)
		{
			if (i != j)
			t[j][i] = m[i][j];
			else
			t[i][j] = m[i][j];
		}
	}
	printf("Transpose of a matrix:");
	matrix_o(x,y,t);
}




