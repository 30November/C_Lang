//wap to count the no of vowel and consonant
#include <stdio.h> 
#include <math.h> 
#include <string.h>
#include <ctype.h>
int main()
{
	char s[50]; printf("Enter the str:"); gets(s);
	
	int v=0,c=0,i;
	for (i=0;s[i] != '\0';i++)
	{	
		/*if (s[i]==' ') 
		//not required but in sentence space are very common and come frequently after word
		continue;*/
		
		int chk = s[i];
		if (chk<=90 && chk >=65)
		chk = chk + 32;
		
		if (97<=chk && chk <=122)
		{
		switch(chk)
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
	}
	
	printf("V:%d and C:%d",v,c);
	
	return 0;
}
