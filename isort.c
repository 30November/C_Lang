#include <stdio.h>

int main() {
    int l[] = {65,70,75,80,85,60,55,50,45};
    int len = sizeof(l) / sizeof(l[0]);
    int i,j,temp;
    
    for (i=1;i<len;i++)
    {
    	j=i-1;
    	temp=l[i];
    	while(temp < l[j] && j>=0)
    	{
    		l[j+1] = l[j];
    		j--;
		}
		l[j+1] = temp;
	}
    // Print the sorted list
    for (i = 0; i < len; i++) {
        printf("%d ", l[i]);
    }
    printf("\n");

    return 0;
}

