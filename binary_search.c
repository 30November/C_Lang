#include <stdio.h>
#include <stdlib.h>
int compare(const void *a,const void *b)
{
	return *(int *)a - *(int *)b;   
}

int main()
{
	int size;
	printf("Enter the size:");
	scanf("%d",&size);
	
	int array[size],i;
	printf("Enter all the elements:");
	for (i=1;i<=size;i++) scanf("%d",&array[i]);
	
	int target;
	printf("Enter the target for searching:");
	scanf("%d",&target);
	
	int left = 1, right = size, mid;
	qsort(array,size,sizeof(int),compare);
	
	while (left <= right)//condition of valid B.search
	{
		//always imagine the number line in mind 
		mid=(right+left)/2;
		
		if (array[mid] == target) {printf("Target found at %d",mid);break;}
		
		else if (target < array[mid]) right=mid-1;
		
		else left=mid+1;
		
	} if (left > right) printf("Element no found");//invalid B.search
	
	return 0;
}
