#include <stdio.h>
#include <stdlib.h>

int partition(int array[],int p,int r)
{
	int par=p;
	
	int i,temp;
	for (i=p;i<r;i++) 
	{
		if (array[i]<=array[r])
		{
			temp=array[par];
			array[par]=array[i];
			array[i]=temp;
			par++;
		}
	}
	temp=array[par];
	array[par]=array[r];
	array[r]=temp;
	return par;
}

void quick_sort(int array[],int p,int r)
{
	if (p < r)
	{
		int q=partition(array,p,r);
		quick_sort(array,p,q-1);
		quick_sort(array,q+1,r);
	}
}


int main()
{
	int i,size=10;
	int arr[] = {9,7,5,3,1,2,4,6,8,0};
	quick_sort(arr,0,9);
	//display
	printf("All the elements:");
	for (i=0;i<size;i++) printf("%d ",arr[i]);
	
}
