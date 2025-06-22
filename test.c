#include <stdio.h>
#include <stdlib.h>
typedef struct
{
	int start,end;
} SCH;

int compare(const void *a,const void *b)
{
	const SCH *p1 = a,*p2 = b;
	return (p1->start==p2->start)?(p1->end-p2->end):(p1->start-p2->start); 
}

int main()
{
	int n=6;
	SCH sche[n];
	int i,index,count;
	printf("Enter start and end of the JOB");
	for (i=0;i<n;i++)
	scanf("%d%d",&sche[i].start,&sche[i].end);
	
//	qsort(sche,n,sizeof(SCH),compare);
	index = count = 0;
	for (i=0;i<n;i++)
	if (sche[index].end<sche[i].start)
	{ index = i; count += 1;}
	
	printf("Total:%d",count);
	
	
	return 0;
}
