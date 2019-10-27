#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include "libstack2.h"
void main()
{
	Stack st;
	assign(&st);
	char x;
	int op1,op2,v;
	printf("Enter the expression\n");
	char *n=(char*)malloc(sizeof(char));
	int i=0;
	scanf("%[^\n]",n);
	for(i=0;n[i]!='\0';i++);
	for(i-=1;i>=0;i--)
	{
		x=n[i];
		if(isdigit(x))
			push(&st,x-'0');
		else
		{
			op2=pop(&st);
			op1=pop(&st);
			v=eval(x,op1,op2);
			push(&st,v);
		}
	}
	v=pop(&st);
	printf("The value of expression is %d\n",v);
	n=NULL;
	free(n);
}