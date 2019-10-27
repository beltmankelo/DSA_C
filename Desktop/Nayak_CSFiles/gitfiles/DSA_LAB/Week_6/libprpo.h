#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX_SIZE 15
typedef struct{
	int top;
	char a[10][10];
}Stack;

void assign(Stack *st)
{
	st->top=-1;
}
int isFull(Stack *st)
{
	if(st->top>MAX_SIZE)
	{
		return 0;
	}
	return 1;
}
int isEmpty(Stack *st)
{
	if(st->top==-1)
		return 0;
	return 1;

}
void push(Stack *st,char *l)
{
	if(isFull(st))
	{
		++st->top;
		strcpy(st->a[(st->top)],l);
	}
	else 
		printf("Stack overflow\n");

}
char *pop(Stack *st)
{
	if(isEmpty(st))
	{
		return(st->a[(st->top)--]);
	}
	else
		printf("Stack underflow\n");
}
void display(Stack *st)
{
	int i;
	if(isEmpty(st))
	{
	printf("\nStack elements are\n");
	for(i=st->top;i>=0;i--)
		printf("%s",st->a[i]);
    }
    else
    	printf("No elements\n");
}
