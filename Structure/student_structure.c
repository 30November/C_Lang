#include <stdio.h>
#include <string.h>
struct student
{
	int roll;
	float marks[3];
	char name[20];
}stu[3];


int main()
{
	int i,j;
	//input
	for (i=0;i<3;i++)
	{
		printf("Enter the %d.student name:",i+1);
		//scanf("%s",stu[i].name);
		gets(stu[i].name);
		
		printf("Enter his/her roll no:");
		scanf("%d",&stu[i].roll);
		
		for (j=0;j<3;j++)
		{
			printf("Enter mark of subject(%d):",j+1);
			scanf("%f",&stu[i].marks[j]);
		} printf("\n");
	}
	
	//output
	printf("Here are the following records:");
	for (i=0;i<3;i++)
	{
		printf("%d.Student name:%s\n",i+1,stu[i].name);
		
		printf("his/her roll no:%d\n",stu[i].roll);
		
		float sum=0;
		for (j=0;j<3;j++)
		{
			printf("%d.Subject marks is %f\n",j+1,stu[i].marks[j]);
			sum += stu[i].marks[j];
		}
		printf("The average marks of %d.student is %f\n",i+1,sum/3);
		printf("\n");
	}
	

	return 0;
}

