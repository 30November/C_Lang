#include <stdio.h>
#define L 1000
int main()
{
	int visit[6],dis[6],i,j;
	int edge[4][4]= 
	{{L,4,3,L,L,L},
	 {4,L,1,2,L,L},
	 {3,1,L,4,L,L},
	 {L,L,4,L,2,L},
	 {L,L,L,2,L,6},
	 {2,L,L,L,6,L}};
	 
	 for (i=0;i<6;i++)
	 {
	 	visit[i]=0;//not visit
	 	dis[i]=L; //NOT relax
	 }
	 
	 //choose start at '0'
	 visit[0]=1;
	 dis[0]=0;
	 int done=1;
	 while (done != 6)
	 {
	 	for (i=0;i<6;i++)
	 	{
	 	if (visit[i]==1)
		{
		 for (j=0;j<6;j++)
		 {
		 	if (visit[j]==0 && dis[i]+edge[i][j] < dis[j])
		 	dis[j] = dis[i];
		}	
		}	
		}
	 		
	 }
	 
	
	
					
}
