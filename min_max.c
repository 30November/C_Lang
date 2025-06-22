#include <stdio.h>

void min_max(int a[], int l, int r, int *min, int *max) {
    if (l == r) { *min = *max = l; return; }
    if (r - l == 1) {
        *min = (a[l] < a[r]) ? l : r;
        *max = (a[l] > a[r]) ? l : r;
        return;
    }
    int m = (l + r) / 2, min1, max1, min2, max2;
    min_max(a, l, m, &min1, &max1);
    min_max(a, m+1, r, &min2, &max2);
    *min = (a[min1] < a[min2]) ? min1 : min2;
    *max = (a[max1] > a[max2]) ? max1 : max2;
}

int main() {
    int a[] = {9,7,5,3,1,2,4,6,8,0}, n = 10, min, max;
    min_max(a, 0, n-1, &min, &max);
    printf("MIN: %d at %d, MAX: %d at %d\n", a[min], min, a[max], max);
    return 0;
}

