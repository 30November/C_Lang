#include <stdio.h>
#include <math.h>

int main()
{
	int num,chk_1,chk_2,lth=0,sum=0,r,i;
	//printf("Enter the number:");
	//scanf("%d",&num);
	for (i=100;i<=1000;i++)
	{
	chk_1=num;
	while (chk_1>0)
	{
		chk_1/=10;
		lth++;
	}
	chk_2=num;
	while (chk_2>0)
	{
		r=chk_2 % 10;
		sum += pow(r,lth);
		chk_2 /= 10;
	}
	if (num == sum)
	printf("%d is Armstrong",sum);
 return 0;
}
