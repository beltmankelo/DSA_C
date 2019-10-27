#include<stdio.h>
#include<stdlib.h>
#include "libstack2.h"
void main()
{
	Stack st;
	int d;
	assign(&st);
	printf("Enter number\n");
	scanf("%d",&d);
	int i=d;
	//printf("1\n");
	while(i!=0)
	{
	//	printf("1\n");
		push(&st,i%2);
		i/=2;
	}
	//printf("1\n");
	//while(isEmpty(&st))
	//{
//		pop(&st);
		display(&st);
//	}
}