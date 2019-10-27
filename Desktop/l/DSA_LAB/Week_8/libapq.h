#include <stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

#define MAX_SIZE 10
typedef struct {
	int a [MAX_SIZE];
	int front;
	int rear;
} Queue;
void assign(Queue *qu)
{
	qu->front=qu->rear=-1;
}
int isfull(Queue *qu)
{
	if(qu->rear>MAX_SIZE)
		return 1;
	return 0;
}
int isempty(Queue *qu)
{
	if(qu->rear==-1)
		return 1;
	return 0;
}
void insertq(Queue *qu,int l)
{
	int i,j;
	if(!isfull(qu))
	{
		if(qu->rear==-1)
		{
			qu->front=qu->rear=0;
			qu->a[qu->rear]=l;
		}
		/*else if(qu->rear==0&&l<qu->a[qu->rear])
		{
			qu->a[qu->rear+1]=qu->a[qu->rear];
			qu->a[qu->rear++]=l;
		}*/
		else
			qu->a[++qu->rear]=l;
	}
	else
		printf("Queue full\n");
}
int deleteq(Queue *qu)
{
	if(!isempty(qu))
	{
		int i,j;
		int sm=qu->a[qu->front];
		for(i=qu->front;i<=qu->rear;i++)
		{
			if(qu->a[i]<sm)
			{
				int temp=qu->a[i];
				qu->a[i]=qu->a[qu->front];
				qu->a[qu->front]=temp;
			}
		}
		printf("Deleting %d\n",qu->a[qu->front]);
		if(qu->front==qu->rear)
		{
			assign(qu);
		}
		else
			qu->a[qu->front++];
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
		for(i=k;i<=p;i++)
			printf("%d\n",qu->a[i]);
	}
	else
		printf("Queue empty\n");
}
/*else
			{
				qu->a[qu->rear+1]=qu->a[qu->rear];
				qu->a[qu->rear]=l;
				qu->rear++;
			}
		}
		else
		{
			int i=qu->front,j;
			if(l>qu->a[qu->rear])
				qu->a[++qu->rear]=l;
			else
			{
				for(;i<=qu->rear;i++)
				{
				if(l>qu->a[i]&&l<qu->a[i+1])
					{
					for(j=qu->rear;j>=i;j--)
						qu->a[j+1]=qu->a[j];
						qu->rear++;
						qu->a[i]=l;
					}
				}
			}
		}*/