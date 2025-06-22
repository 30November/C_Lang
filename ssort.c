#include <stdio.h>

int main() {
    int a[] = {10, 5, 2, 12, 8, 6, 1};
    int len = sizeof(a) / sizeof(a[0]);
    int i, j, index, temp;

    for (i = 0; i < len-1; i++) {
        index = i;
        for (j = i; j < len; j++) {
            if (a[j] < a[index]) 
                index = j;   // Update index of the smallest elemen
        }
        // Swap elements
        temp = a[i];
        a[i] = a[index];
        a[index] = temp;
    }

    // Print the sorted array
    for (i = 0; i < len; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

