#include <stdio.h>
main()
{
	int num,sum=0,a;
	
printf("Enter the number");
scanf("%d",&num);
int op = num;
while (op>0)
{
	a = op%10;
	sum = sum*10 + a;
	op = op/10;
	
}

if (num==sum)
printf("Palidrome");
else
printf("Nope");

return 0;
}
