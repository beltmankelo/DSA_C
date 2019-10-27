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
	while((x=getchar())!='\n')
	{
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
}