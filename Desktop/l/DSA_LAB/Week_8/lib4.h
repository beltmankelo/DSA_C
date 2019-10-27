#include <stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

#define MAX 10
typedef struct {
	int a [MAX];
	int front;
	int rear;
} Queue;
void qassign(Queue *qu)
{
	qu->front=qu->rear=-1;
}
int qisfull(Queue *qu)
{
	if(qu->front==(qu->rear +1)%MAX)
		return 1;
	return 0;
}
int qisempty(Queue *qu)
{
	if(qu->rear==-1)
		return 1;
	return 0;
}
void insertq(Queue *qu,int l)
{
	if(!qisfull(qu))
	{
		if(qu->rear==-1)
		{
			qu->front=qu->rear=0;
			qu->a[qu->rear]=l;
		}
		else
		{
				qu->a[++qu->rear]=l;
		}
	}
	else
		printf("Queue full\n");
}
int deleteq(Queue *qu)
{
	if(!qisempty(qu))
	{
		int x=qu->a[qu->front];
		if(qu->front==qu->rear)
		{
			//return (qu->a[qu->front]);
			qassign(qu);
		}
		else
			qu->front++;
		return x;
	}
	else
		printf("Queue empty\n");
}
void qdisplay(Queue *qu)
{
	if(!qisempty(qu))
	{
		int i;
		int n=1;
		int k=qu->front;
		int p=qu->rear;
		printf("Queue elements are\n");
		for(i=k;i!=p;(i++)%MAX)
			printf("%d\n",qu->a[i]);
		printf("%d\n",qu->a[i%MAX] );
	}
	else
		printf("Queue empty\n");
}
