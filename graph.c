#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next[4];
};

typedef struct node NODE;
//graph
int main()
{
	NODE *ver[4];
	int matrix[4][4]={{0,1,1,1},{1,0,1,0},{1,1,0,1},{1,0,1,0}};
	
	int i,j;
	
	for (i=0;i<4;i++)
	{
		ver[i]=malloc(sizeof(NODE));
		scanf("%d",&ver[i]->data,printf("Enter the data of %d.vertex",i+1));
		for (j=0;j<4;j++)
		{
			if (matrix[i][j]) ver[i]->next[j]=ver[j];
			else ver[i]->next[j]=NULL;
		}
	}
	
	for (i=0;i<4;i++)
	{
		for (j=0;j<4;j++)
		{
			if (matrix[i][j]) printf("%d->%d ",ver[i]->data,ver[j]->data);
			else printf("%d->NULL ",ver[i]->data);
		}
		printf("\n\n");
	}
	
	return 0;
}
