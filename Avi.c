#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
	char odd_s[]="hello";
	char new_s[10];
	char *p;
	p=odd_s;
	
	int i,temp;
	for (i=0;*(p+i) != '\0';i++)
	{
		temp = *(p+i);
		new_s[i]=temp ;
	}
	
	for (i=0;new_s[i] != '\0';i++)
	{
		printf("%c",new_s[i]);
	}

	//instead of for loop use can use puts(new_s);

	return 0;	
}
