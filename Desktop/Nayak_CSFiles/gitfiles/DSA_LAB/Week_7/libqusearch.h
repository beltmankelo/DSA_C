#include <stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

#define MAX_SIZE 10
typedef struct {
	char a [MAX_SIZE];
	int front;
	int rear;
} Queue;
void assign(Queue *qu)
{
	qu->front=qu->rear=-1;
}
int isfull(Queue *qu)
{
	if(qu->front==(qu->rear +1)%MAX_SIZE)
		return 1;
	return 0;
}
int isempty(Queue *qu)
{
	if(qu->rear==-1)
		return 1;
	return 0;
}
void insertq(Queue *qu,char l)
{
	if(!isfull(qu))
	{
		if(qu->rear==-1)
		{
			qu->front=qu->rear=0;
			qu->a[qu->rear]=l;
		}
		else
		{
			qu->rear++;
		 	qu->a[(qu->rear)]=l;
		}
	}
	else
		printf("Queue full\n");
}
char deleteq(Queue *qu)
{
	if(!isempty(qu))
	{
		if(qu->front==qu->rear)
		{
			//printf("Deleting %c\n",qu->a[qu->front]);
			return (qu->a[qu->front]);
			assign(qu);
		}
		else
			return (qu->a[qu->front++]);
	}
	else
		printf("Queue empty\n");
}
void display(Queue *qu)
{
	if(!isempty(qu))
	{
		int i;
		int n=1;
		int k=qu->front;
		int p=qu->rear;
		printf("Queue elements are\n");
		for(i=k;i!=p;(i++)%MAX_SIZE)
			printf("%c\n",qu->a[i]);
		printf("%c\n",qu->a[i%MAX_SIZE] );
	}
	else
		printf("Queue empty\n");
}
