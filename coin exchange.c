#include <stdio.h>
void greedy(int coins[],int quan[],int index,int n,int *money)
{
	int i;
	for (i=index;i<n;i++)
	{
		if (coins[i]>*money)
		continue;
		
		quan[i]=*money/coins[i];
		*money%=coins[i];
	}
	
}

void display(int arr1[],int arr2[],int n)
{
	int i;
	for(i=0;i<n;i++) printf("%d:%d\n",arr1[i],arr2[i]);
}

int main()
{
	int i,n;
	scanf("%d",&n,printf("Enter the size"));
	
	int coins[n];
	printf("Enter the coins\n");
	for (i=0;i<n;i++) scanf("%d",&coins[i]); 
	
	int quan[n];
	for(i=0;i<n;i++) quan[i]=0;
	
	int p=0,tg,work;scanf("%d",&tg,printf("Enter the target"));
	work=tg;
	
	while (1)
	{
		greedy(coins,quan,p,n,&work);
		if (!work) {display(coins,quan,n);return 0;}
		p=n-1;
		work+=quan[p]*coins[p];
		quan[p]=0;
		while (p>=0 && quan[p]==0) p--;
		if (p==-1) {printf("NOT FOUND");return 0;}
		quan[p]--;
		work+=coins[p++];
		
	}
		
}

