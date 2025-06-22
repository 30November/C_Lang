#include <stdio.h>

void heap_max(int A[], int i, int n) {
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int temp, big = i;

    if (left < n && A[left] > A[big]) big = left;
    if (right < n && A[right] > A[big]) big = right;

    if (big != i) {
        temp = A[big];
        A[big] = A[i];
        A[i] = temp;
        heap_max(A, big, n);  // Fix: Call with "big" instead of "i"
    }
}

int main() {
    int temp, i, size = 10;
    int arr[] = {9, 7, 5, 3, 1, 2, 4, 6, 8, 0};

    // Build Max Heap
    for (i = size / 2 - 1; i >= 0; i--) heap_max(arr, i, size);

    // Heap Sort
    for (i = size - 1; i > 0; i--) {
        temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        heap_max(arr, 0, i); // Fix: Call with "i" instead of "i - 1"
    }

    printf("Sorted elements: ");
    for (i = 0; i < size; i++) printf("%d ", arr[i]);

    return 0;
}
