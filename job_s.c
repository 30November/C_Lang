#include <stdio.h>


typedef struct
{
	int p,d;
} JOB;

int compare(const void *a,const void *b)
{
return ((JOB *)b)->p - ((JOB *)a)->p ;	
}
int main()
{
	JOB jobs[3];
	int i;
	for (i=0;i<3;i++)
	{
		scanf("%d",&jobs[i].p,printf("What's profit:"));
		scanf("%d",&jobs[i].d,printf("It's deadline:"));
		printf("\n");
	}
	
	qsort(jobs,3,sizeof(JOB),compare);
	
	int size=3;
	for (i=0;i<3;i++)
	if (jobs[i].d>size)
	size = jobs[i].d;
	
	int gc[size];
	for (i=0;i<3;i++) gc[i]=0;
	
	for(i=0;i<3;i++)
	{
		int j = jobs[i].d<3-1?jobs[i].d:3-1;
		while (j >= 0)
		{
			if (gc[j] == 0)
			{gc[j] = i;break;}
			j--;
		}
	}
	
	for(i=0;i<3;i++) printf("%d");
	return 0;
}
