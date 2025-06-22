#include <stdio.h>

int interpolationSearch(int * A,int n,int val){
    int high,low,probe;
    high = n - 1;
    low = 0;
    while (val >= A[low] && val <= A[high] && low<=high){
        probe = low + (high - low)*(val - A[low])/(A[high]-A[low]);
        // printf("Probe : %d\n",probe);
        if (val == A[probe]){
            return probe;
        }
        else if (val > A[probe]){
            low = probe + 1;
        }
        else{
            high = probe - 1;
        }
    }
    return -1; 
}
 //insertion sort
void properInsert(int arr[], int last) {
    int temp = arr[last];
    int j = last - 1;
    while (temp < arr[j] && j >= 0) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = temp;
}

void main(){
    int a[100],RES,n,num;
    scanf("%d",&n,printf("Enter size: "));
    int i;
	for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
        properInsert(a, i);
    }
    printf("Sorted array: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    scanf("%d",&num,printf("\nEnter to search: "));
    RES = interpolationSearch(a,n,num);
    if (RES != -1){
        printf("\nElement Found at %d ",RES);
    }
    else{
        printf("\nNot Found !!");
    }
}
