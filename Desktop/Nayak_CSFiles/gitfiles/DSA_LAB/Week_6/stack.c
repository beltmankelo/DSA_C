#include<stdio.h>
#include<stdlib.h>
#include "libstack.h"
void main()
{
	Stack st;
	assign(&st);
	int l;
	int ch;
	int i;
	printf("Enter choice 1-Push 2-Pop 3-Display 4-Exit\n");
	do
	{
		printf("Enter side\n");
		scanf("%d",&i);	
		printf("Enter choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			printf("Enter number\n");
			scanf("%d",&l);
			//printf("%s\n",l);
			push(&st,l,i-1);
			break;
			case 2:
			pop(&st,i-1);
			break;
			case 3:
			display(&st,i-1);
			break;
		}
	}while(ch!=4);

}