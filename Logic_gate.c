#include <stdio.h>
int main()
{
	int a,b;
	printf("Input");
	scanf("%i%i",&a,&b);
	printf("\nAnd:%i",a&b);
	printf("\nOr:%i",a|b);
	printf("\nNot:%i",~a);
	printf("\nXor:%i",a^b);
	return 0;
}
