#include <stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter the three numbers:");
	scanf("%i%i%i",&a,&b,&c);
	if (a>=b && a>=c)
	{
		printf("%i is the largest",a);
		d=(b>c)?c:b;
		printf("\n%i is the smallest",d);
	}
	else if(b>=a && b>=c)
	{
		printf("%i is the largest",b);
		d=(a>c)?c:a;
		printf("\n%i is the smallest",d);
	}
	else
	{
		printf("%i is the largest",c);
		d=(b>a)?a:b;
		printf("\n%i is the smallest",d);
	}
	return 0;
}
