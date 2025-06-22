#include <stdio.h>
int main()
{
	int sum=0, i, *p;
	int a[3] = {1,2,3};
	
	//method 1
	for (i=0;i<3;i++)
	{
		sum += a[i];
	}
	printf("Sum:%d",sum);
	
	//method 2
	sum = 0;
	for (i=0;a[i] != '\0';i++)
	sum += a[i];
	
	printf("\nSum:%d",sum);
	
	//method 3 (while loop pointer)
	p=a;//means p=&a[0]; valid only for 1d array
	sum=0;
	i=0;
	while (i<3)
	{
		sum += *p;
		i++; p++;
	}
	printf("\nSum:%d",sum);
	
	//method 4 (for loop pointer)
	sum = 0;
	p=a; 
	for (i=0;*(p+i) != '\0';i++)
		sum += *(p+i);
	
	printf("\nSum:%d",sum);
	
	return 0;	
}
