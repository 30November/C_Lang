#include <stdio.h>

void insert(int arr[], int *size, int pos, int value) {
    // Move elements to the right to make space for the new element
    int i;
	for (i = *size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    // Insert the new element
    arr[pos] = value;
    // Increase the size of the array
    (*size)++;
}

int main() {
    int arr[] = {1, 2, 3, 4}; // Initial array (extra space for insertion)
    int size = sizeof(arr)/sizeof(arr[0]); // Initial size of the array

    // Insert 5 at position 3
    insert(arr, &size, 4, 5);
	int i;
    // Print the modified array
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


