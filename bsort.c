#include <stdio.h>

int main() {
    int l[] = {10, 5, 2, 12, 8, 6, 1};
    int len = sizeof(l)/sizeof(l[0]);
    int i, j, flag;

    for (i = 0; i < len; i++) {
    	
        flag = 0; // Initialize flag to check if any swap happens
        for (j = 0; j < len - 1 - i; j++) { // Inner loop to compare adjacent elements
            if (l[j] > l[j + 1]) { // Compare adjacent elements
                // Swap if elements are in the wrong order
                l[j+1] = l[j] + l[j+1];
                l[j] = l[j+1] - l[j];
                l[j+1] = l[j+1] - l[j];
                
                flag = 1; // Set flag to indicate a swap has occurred
            }
        }
        if (flag == 0) { // If no swaps occurred, the list is sorted
            break; // Exit the loop early
        }
    }

    // Print the sorted list
    int k;
    for (k = 0; k < len; k++) {
        printf("%d ", l[k]);
    }
    printf("\n");
    
    return 0;
}

