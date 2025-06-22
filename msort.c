#include <stdio.h>
#include <limits.h>

void merge(int arr[],int p,int mid,int r)  
{
	int n1=mid-p+1;
	int n2=r-mid;
	
	n1++;n2++;  //for sentinel entry
	int left[n1],right[n2];
	
	int i,j,k;
	
	for (i=0;i<n1-1;i++) left[i]=arr[p+i];
	for (j=0;j<n2-1;j++) right[j]=arr[mid+1+j];
	
	i=j=0;	
	//sentinel
	left[n1-1]=SHRT_MAX;right[n2-1]=SHRT_MAX;
	
	for (k=p;k<=r;k++) arr[k] = (right[i]<left[j]?right[i++]:left[j++]);
	
	
}

void  msort(int arr[],int p,int r)
{
	if (p<r)
	{
		int mid=(p+r)/2;
		msort(arr,p,mid);
		msort(arr,mid+1,r);
		merge(arr,p,mid,r);
	}	
}



// main
int main()
{
    int array[20]={19,17,15,13,11,9,7,5,3,1,2,4,6,8,10,12,14,16,18};
    msort(array,0,19);
    
    int i;
    for (i=0;i<20;i++)
    printf("%d ",array[i]);
}
