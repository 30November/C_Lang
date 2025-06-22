#include <stdio.h>
int main()
{
	int a,b;
	printf("Input:");
	scanf("%i",&a);
	printf("Input for shift:");
	scanf("%i",&b);
	printf("right shift %i",a>>b);
	printf("left shift %i",a<<b);
	
	return 0;
}
