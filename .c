#include <stdio.h>
main()
{
	int i,j;
	for(i=0;i<4;++i)
	{
		for(j=0;j<7;++j)
		{
			if((i+j)%2!=0 && (i+j)<=(3+2*i) && (i+j)>1)
			printf("*");
			else
			printf(" ");
		}
	printf("\n");
	}
}
