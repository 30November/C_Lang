//wap to count the no of vowel and consonant
#include <stdio.h> 
#include <math.h> 
#include <string.h>
int main()
{
	char s[20]; printf("Enter the str(only word):"); gets(s);
	
	int v=0,c=0,i;
	for (i=0;s[i] != '\0';i++)
	{
		if (s[i]==' ')
		continue;
		
		switch(s[i])
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				v++; break;
			default:
				c++; break;
		}
	}
	
	printf("V:%d and C:%d",v,c);
	//printf("V:%d and C:%d",v,c); #also valid if yoou are using string function
	
	return 0;
}
