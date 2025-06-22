// Online C compiler to run C program online
#include <stdio.h>
int check(int ver[],int pos,int n)
{
    int i;
    for(i=0;i<=n;i++)
    if (pos==ver[i]) return 0; //forming cycle
    
    return 1;//not forming cycle ... checked with all visited vertices
}

int main() {
    // Write C code here
    int i,j,n;
    printf("Enter the size:");
    scanf("%d",&n);
    
    int edge[n][n];
    //initial index is 1...benefit of dynamic array
    for(i=1;i<=n;i++)
    {
        edge[i][i]=100; //self loop is absent ->sentinal
        for(j=i+1;j<=n;j++)
        {
            printf("%d<->%d:",i,j);
            scanf("%d",&edge[i][j]);
            edge[j][i]=edge[i][j];
                
        }
    }
    
    //prims
    int ver[n],top=0,i1,i2;
    printf("Enter the node to start:");
    scanf("%d",&ver[top]);
    
    while (top != n-1)//till visiting all the vertices
    {
        i1=i2=1;//for finding the min edge
        for(i=0;i<=top;i++)//iterating on the ver[]
        {
            for(j=1;j<=n;j++)//finding min edge w.r.t ver[i]
            {
                if (edge[ver[i]][j] < edge[i1][i2] && edge[ver[i]][j]!=0)
                //not equal to 0 condition for those whose two vertices are not connected
                { i1 = ver[i]; i2 = j;}
            }
        }
        
        if (check(ver,i2,top)) //checking whether forming cycle or not
        {
            printf("Selcted %d<->%d\n",i1,i2);
            ver[++top]=i2;
        }
        
        edge[i1][i2]=0;
        edge[i2][i1]=0; //making selected edge on the original graph disconnect
        
    }
    
    return 0;
}
