#include <stdio.h>

int main()
{
	int data; scanf("%d",&data,printf("Enter the data:"));
	int temp=data,chk=0;
	
	while (temp)
	{
		chk=chk*10+temp%10;
		temp/=10;
	}
	
	printf(chk==data?"Palindrome":"NON-Pali.");
}
