//wap to count the no of vowel and consonant using function
#include <stdio.h> 
#include <math.h> 
#include <string.h>
int vc(char letter);
int vc(char letter)
{
	if (letter == ' ')
		
		
		switch(letter)
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				return 1;
			default:
				return 0;
		}
}
int main()
{
	char s[20]; printf("Enter the str(only word):"); gets(s);
	
	int v=0,c=0,i;
	for (i=0;s[i] != '\0';i++)
	{
		int r=vc(s[i]);
		if (r) v++;
		else if  c++;
	}
	
	printf("V:%d and C:%d",v,c);
	//printf("V:%d and C:%d",v,c); #also valid if yoou are using string function
	
	return 0;
}
