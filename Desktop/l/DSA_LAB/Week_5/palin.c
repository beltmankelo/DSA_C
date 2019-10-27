#include<stdio.h>
#include<stdlib.h>
#include "libstack.h"
void main()
{
	Stack st;
	assign(&st);
	char ch[100];
	int i,j;
	scanf("%s",ch);
	for(i=0;ch[i]!='\0';i++);
	for(j=0;j<i;j++)
		push(&st,ch[j]);
	for(j=0;j<i/2;j++)
		if(ch[j]!=pop(&st))
		{
			printf("String is not Palindrome\n");		
			return ;
		}
	printf("String is a Palindrome\n");
}