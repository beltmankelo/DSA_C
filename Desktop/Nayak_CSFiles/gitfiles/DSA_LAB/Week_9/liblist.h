#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
typedef struct node
{
	int info;
	struct node *link;
}NODE;
typedef NODE* list;
void assign(list l)
{
	l=NULL;
}
list push(list l,int x)
{
	list new,temp;
	new=(list)malloc(sizeof(NODE));
	new->link=l;
	new->info=x;
	return(new);
}
list pop(list l)
{
	list prev,temp;
	if(!l)
	{
		printf("Stack underflow\n");
		return(l);
	}	
	temp=l;
	printf("Deleted element %d \n",temp->info );
	free(temp);
	l=l->link;
	return(l);
}
void display (list l)
{
	list temp;
	printf("Stack elements are\n");
	if(!l)
	{
		printf("Stack is empty\n");
	}
	temp=l;
	while(temp!=NULL)
	{
		printf("%d\n",temp->info );
		temp=temp->link;
	}
}
