#include <stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

#define MAX_SIZE 10
typedef struct {
	char a [MAX_SIZE][10];
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
void insertq(Queue *qu,char l[10])
{
	if(!isfull(qu))
	{
		if(qu->rear==-1)
		{
			qu->front=qu->rear=0;
			strcpy(qu->a[qu->rear],l);
		}
		else
		{
			qu->rear++;
		 	strcpy(qu->a[(qu->rear)%MAX_SIZE],l);
		}
	}
	else
		printf("Queue full\n");
}
void deleteq(Queue *qu)
{
	if(!isempty(qu))
	{
		if(qu->front==qu->rear)
		{
			printf("Deleting %s\n",qu->a[qu->front]);
			assign(qu);
		}
		else
			{
			printf("Deleting %s\n",qu->a[(qu->front++)%MAX_SIZE]);
			}

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
			printf("%s\n",qu->a[i]);
		printf("%s\n",qu->a[i%MAX_SIZE] );
	}
	else
		printf("Queue empty\n");
}
