#include <stdio.h>
#include <string.h>
main()
{
	char st[5],n[5];
	int i=5,j;
	printf("Enter:");
	gets(st);
	for (j=0;j<5;j++)
	{
		n[j]=st[--i];
	}
	n[j]='\0';
	puts(n);
}
