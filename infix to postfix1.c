#include <stdio.h>

int power(int op)
{
	if (op=='^') return 3;
	if (op=='/' || op=='*') return 2;
	if (op=='+' || op=='-') return 1;

}


int main()
{
	char q[50];
	scanf("%s",q,printf("Enter the expression in the bracket form:"));
	char stk[20];
	char p[50];
	int p_top=-1,stk_top=-1;
	
	int i,j;
	for (i=0;q[i];i++)
	{
		printf("%c\n",q[i]);
		
		switch(q[i])
		{
			case '^':
			case '/':
			case '*':
			case '+':
			case '-':
				while (power(stk[stk_top]) >=power(q[i]) && stk[stk_top]!='(')
				p[++p_top]=stk[stk_top--];
				stk[++stk_top]=q[i];
				break;
			
			case '(':
				stk[++stk_top]=q[i];
				break;
			
			case ')':
				while (stk[stk_top]!='(')
				p[++p_top]=stk[stk_top--];
				stk[stk_top--];
				break;
			
			default:
				p[++p_top]=	q[i];
				break;
		}
	}
	
	int k=0;
	while (k<=p_top)
	printf("%c",p[k++]);
	
	return 0;
}
