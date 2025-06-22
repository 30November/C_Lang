#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int w,p;
} ITEM;

int compare(const void *a, const void *b) {
    float r1 = (float) ((ITEM *)a)->p / ((ITEM *)a)->w;
    float r2 = (float) ((ITEM *)b)->p / ((ITEM *)b)->w;

    if (r1 < r2) return 1;   // For descending order
    if (r1 > r2) return -1;
    return 0;
}





int main()
{
	//frac knapsack
	ITEM items[3];
	int rw,i;
	for (i=0;i<3;i++)
	{
		scanf("%d",&items[i].p,printf("Enter the price:"));
		scanf("%d",&items[i].w,printf("It's weight:"));
		printf("\n");
	}
	
	float ans=0;
	scanf("%d",&rw,printf("Enter the required weight:"));
	
	qsort(items,3,sizeof(ITEM),compare);
	
	for (i=0;i<3;i++)
	{
		if (rw > items[i].w)
		{
			ans += items[i].p ;rw -= items[i].w;
		}
		else { ans +=  ((float)items[i].p/items[i].w * rw) ; break; }
	}
	
	printf("%f",ans);
	return 0;
}
