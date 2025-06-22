#include <stdio.h>
#include <string.h>
main()
{
	char st[10];
	char chk[6]="aeiou";
	int v=0,c=0;
	printf("Enter the string:");
	gets(st);
	int i,j;
	for (i=0;st[i]!='\0';i++)
	{
		for (j=0;j<5;j++)
		{
			if (st[i]==chk[j])
			v++;
			else
			c++;
		}
	}
	printf("V:%d and C:%d",v,c);
}
