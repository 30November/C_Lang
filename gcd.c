#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
	int num1=100,num2=40;
	int i;
	int small=num1>num2?num1:num2;
	for (i=small;i>0;i--)
	{
		int gcd=i;
		if (num1%gcd==0)
		{
			if(num2%gcd==0)
			{
			printf("GCD: of %d and %d is %d",num1,num2,gcd);
			break;
			}
			
		}
		
	}

	return 0;	
}
