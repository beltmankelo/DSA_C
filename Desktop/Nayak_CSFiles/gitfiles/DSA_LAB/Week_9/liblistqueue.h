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
list f,r;
void assign(list l)
{
	f=r=NULL;
}
void insertq(list l,int x)
{
	if(!f)
	{
		f=(list)malloc(sizeof(NODE));
		f=r=l;
		f->info=x;
	}
	else
	{
		list new;
		new=(list)malloc(sizeof(NODE));
		new->link=l;
		new->info=x;
		r->link=new;
		r=new;
		r->link=NULL;
	}
}
void deleteq(list l)
{
	if(!l||!f)
	{
		printf("Queue empty\n");
	}	
	else if(f==r)
	{
	printf("Deleted element %d \n",f->info );
		assign(l);
	}
	else
	{
	printf("Deleted element %d \n",f->info );
	list temp;
	f=temp->link;
	free(temp);
	}
}
void display (list l)
{
	list temp;
	printf("Queue elements are\n");
	if(!l)
	{
		printf("Queue is empty\n");
	}
	temp=l;
	while(temp!=NULL)
	{
		printf("%d\n",temp->info );
		temp=temp->link;
	}
}
