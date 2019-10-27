#include<stdio.h>
#include<stdlib.h>
#include "libstack.h"
void main()
{
	Stack st;
	assign(&st);
	char l;
	int ch;
	printf("Enter choice 1-Push 2-Pop 3-Display 4-Exit\n");
	do
	{
		printf("Enter choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			printf("Enter character\n");
			scanf("%s",&l);
			//printf("%s\n",l);
			push(&st,l);
			break;
			case 2:
			pop(&st);
			break;
			case 3:
			display(&st);
			break;
		}
	}while(ch!=4);

}