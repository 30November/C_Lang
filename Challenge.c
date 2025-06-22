#include <stdio.h>
void arr_maker(int x,int a[]);
void arr_display(int x,int a[]);
int main()
{
	int lth;
	printf("Enter the length of array:");
	scanf("%d",&lth);
	int a[lth];
	arr_maker(lth,a);
	arr_display(lth,a);
	return 0;
}
void arr_maker (int x,int a[])
{
	printf("Enter the elements");
	int i;
	for (i=0;i<x;i++)
	scanf("%d",&a[i]);
}
void arr_display (int x,int a[])
{
	int i;
	for (i=0;i<x;i++){
	printf("%d\n",a[i]);}
}
