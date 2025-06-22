#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
	char a[]="hello";
	char *p = a;
	int length,count = 0;
	
	while (*p != '\0')
	{
		printf("%c at %u\n",*p,p);
		++p;count++;
	}
	
	length = p - a;
	printf("Length:%d",length);
	printf("Length:%d",count);
	
	
	return 0;	
}
