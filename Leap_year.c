#include <stdio.h>
int main()
{
	int yr;
		printf("Enter the year to check:");
	scanf("%i",&yr);
	if((yr%100!=0 && yr%4==0)||yr%400==0)
	printf("Leap year");
	else
	printf("Ordinary year");
	return 0;
}
