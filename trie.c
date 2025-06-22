#include <stdio.h>
#include <stdlib.h>
#define N(l) (l-'a')

struct node
{	int end;
	struct node *next[26];
};

typedef struct node NODE;

NODE *create() 
{
	NODE *temp=malloc(sizeof(NODE));
	int i;
	temp->end=0;
	for (i=0;i<26;i++) temp->next[i]=NULL;
	return temp;
}

void words(NODE *root,int top,char w[])
{
	if (!root) return;
	
	int i;
	if (root->end)
	{
		for(i=0;i<=top;i++) 
		printf("%c",w[i]);
		printf("\n");
	}
	
	for (i=0;i<26;i++)
	{
		w[++top]=i+'a';
		words(root->next[i],top,w);
		top--;
	}
	
}

int main()
{
	NODE *root,*p;
	root=create();
	int i,val,op;
	char l[20];
	
	while (1)
	{
		scanf("%s",l,printf("Enter the string:"));
		p=root;
		for (i=0;l[i];i++)
		{
			val=N(l[i]);
			if (!p->next[val]) p->next[val]=create();
			p=p->next[val];
		}
		p->end=1;
		scanf("%d",&op,printf("Enter more words?(1/0):"));
		if (!op) break; 
	}	 
	
	//search
	while (1)
	{
		int flag=1; //found word (rear case)
		scanf("%s",l,printf("String searching:"));
		p=root;
		for (i=0;l[i];i++)
		{
			val=N(l[i]);
			if (!p->next[val]) {flag=0;break;}
			p=p->next[val];
		}
		printf((flag && p->end)?"FOUND\n":"NOT FOUND\n");
		scanf("%d",&op,printf("1.Search 2.All 0.Exit->"));
		if (op==2) words(root,-1,l);
		if (op==0) break;
	}
	
	return 0;	
}
