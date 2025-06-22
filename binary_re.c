#include <stdio.h>
//{1, 2, 5, 6, 8, 10, 12}
// Function to perform binary search recursively
int binarySearch(int arr[], int low, int high, int target) {
    if (low <= high) 
	{
        int mid = (low + high) / 2; // Calculate the mid index

        // If the target is found at the mid index
        if (arr[mid] == target) {
            return 1;
        }

        // If the target is smaller than the mid element, search the left subarray
        if (target < arr[mid]) {
            return binarySearch(arr, low, mid - 1, target);
        }

        // If the target is larger than the mid element, search the right subarray
        if (target > arr[mid])
        return binarySearch(arr, mid + 1, high, target);
    }

    // If the target is not found, return -1
    return 0;
}

int main() {
    int arr[] = {1, 2, 5, 6, 8, 10, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    printf("Enter the target:");
    scanf("%d",&target);
    
    int result = binarySearch(arr, 0, n - 1, target);
    
    if (result) {
        printf("Element found");
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}

