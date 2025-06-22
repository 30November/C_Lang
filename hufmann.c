// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
//hufmann
struct node
{
    char letter;
    int data;
    struct node *rg;
    struct node *lf;
};

typedef struct node NODE;

NODE *create()
{
    NODE *temp=malloc(sizeof(NODE));
    temp->rg=NULL;
    temp->lf=NULL;
    return temp;
}

int main() {
    // Write C code here
    char s[25],ch;
    printf("Enter the string:");
    scanf("%s",s);
    int freq[26],i,unique=0,index;
    
    for(i=0;i<26;i++) freq[i]=0;
    
    for(i=0;s[i];i++)
    {
        index=s[i];
        if (freq[index%97]==0) unique+=1;
        freq[index%97]+=1;
    }
    
    NODE *arr[unique];
    int top=-1;
    
    for(i=0;i<26;i++)
    {
        if (freq[i]!=0)
        {
            arr[++top]=create();
            arr[top]->letter=i+97;
            arr[top]->data=freq[i];
        }
    }
    
    for(i=0;i<=top;i++) printf("%c:%d ",arr[i]->letter,arr[i]->data);
    
    
    
    return 0;
}
