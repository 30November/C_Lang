#include <stdio.h>
#include <math.h>
int main()
{
	float a,b,c,D;
	float real,img;
	float alpha,beta;
	printf("Enter the coefficient of quadratic equation:");
	scanf("%f%f%f",&a,&b,&c);
	D = (b*b-4*a*c);
	if (D<0)
	{
		real = -b/(2*a);
		img = sqrt(-D)/(2*a);
		printf("\nRoots are (%f+(%.2f)j) and (%f+(%.2f)j)",real,img,real,-img);
	} else {
		alpha = (-b+sqrt(D))/(2*a);
		beta = (-b-sqrt(D))/(2*a);
		printf("\nRoots are %f and %f",alpha,beta);
	}
	return 0;
}
