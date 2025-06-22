#include <stdio.h>
#include <math.h>
#include <string.h>
int count(char st[],int size,char *pt);
int main()
{
	printf("Enter the str:");
	char st[50];
	char pt;
	gets(st);
	int size=50;
	int c=count(st,size,&pt);
	printf("V:%d and C:%d",(strlen(st)-c),c);
	
	
	return 0;
}

int count(char st[],int size,char *pt)
{
	int i,c=0;
	for (i=0;st[i]!='\0';i++)
	{
		*pt = st[i];
		char j = tolower(*pt);
		switch(j)
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				break;
			default:
				c++;
				break;
		}
	}
	return c;
}
