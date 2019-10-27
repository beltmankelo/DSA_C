#include <stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

#define MAX_SIZE 5
typedef struct {
	int a [MAX_SIZE];
	int front;
	int rear;
} DeQueue;
void assign(DeQueue *qu)
{
	qu->rear=qu->front=-1;
}
int isfull(DeQueue *qu)
{
	if(qu->front==(qu->rear +1)%MAX_SIZE)
		return 1;
	return 0;
}
int isempty(DeQueue *qu)
{
	if(qu->rear==-1)
		return 1;
	return 0;
}
void enQueueR(DeQueue *qu,int l)
{
	if(!isfull(qu))
	{
		if(qu->rear==-1)
		{
			qu->front=qu->rear=0;
		}
		else
		{
			qu->rear=(qu->rear+1)%MAX_SIZE;
		}
		qu->a[(qu->rear)]=l;
	}
	else
		printf("DeQueue full\n");
}
void enQueueF(DeQueue *qu,int l)
{
	if(!isfull(qu))
	{
		if(qu->rear==-1)
		{
			qu->front=qu->rear=0;
		}
		else
		{
			qu->front=(qu->front-1+MAX_SIZE)%MAX_SIZE;
			
		}
		printf(" :::%d:::%d\n",qu->front,qu->rear);
		qu->a[(qu->front)]=l;
	}
	else
		printf("DeQueue full\n");
}
int deQueueF(DeQueue *qu)
{
	if(!isempty(qu))
	{
		printf("Deleting %d\n",qu->a[qu->front]);
		if(qu->front==qu->rear)
			assign(qu);
		else
			qu->front=(qu->front+1)%MAX_SIZE;
	}
	else
		printf("DeQueue empty\n");
}
void display(DeQueue *qu)
{
	if(!isempty(qu))
	{
		int i;
		int k=qu->front;
		int p=qu->rear;
		printf("DeQueue elements are\n");
		for(i=k;i!=p;(i++)%MAX_SIZE)
			printf("%d\n",qu->a[i]);
		printf("%d\n",qu->a[i%MAX_SIZE] );
	}
	else
		printf("DeQueue empty\n");
}
