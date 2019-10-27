#include <stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

#define MAX_SIZE 20
typedef struct {
	char a [MAX_SIZE][10];
	int front[2];
	int rear[2];
} Queue;
void assign(Queue *qu)
{
	qu->front[0]=qu->rear[0]=-1;
	qu->front[1]=qu->rear[1]=MAX_SIZE/2-1;
}
int isfull(Queue *qu,int i)
{
	if(qu->front[i]==(qu->rear[i] +1)%(MAX_SIZE/2+i*MAX_SIZE/2))
		return 1;
	return 0;
}
int isempty(Queue *qu)
{
	int f=0;
	if(qu->rear[0]==-1 && qu->rear[1]==MAX_SIZE/2-1)
		return 1;
	else if(qu->rear[0]==-1)
		printf("Queue 1 empty\n");
	else IF(qu->rear[1]==MAX_SIZE/2-1)
		printf("Queue 2 empty\n");
	return 0;

}
void insertq(Queue *qu,char l[10],int i)
{
	if(!isfull(qu,i))
	{
		if(!i)
			{
				if(qu->rear[0]==-1)
					qu->front[0]=0;
			}
		else if(qu->rear[1]==MAX_SIZE/2-1)
				qu->front[1]=MAX_SIZE/2;
		qu->rear[i]++;
 		strcpy(qu->a[(qu->rear[i]%(MAX_SIZE/2+i*MAX_SIZE/2))],l);
	}
	else
		printf("Queue full\n");
	}
void deleteq(Queue *qu,int i)
{
	if(!isempty(qu))
	{
		if(qu->front[i]==qu->rear[i])
		{
			printf("Deleting %s\n",qu->a[qu->front[i]]);
			if(!i)
				qu->front[0]=qu->rear[0]=-1;
			else	
				qu->front[1]=qu->rear[1]=MAX_SIZE/2-1;
		}
		else
			{
			printf("Deleting %s\n",qu->a[(qu->front[i]++%(MAX_SIZE/2+i*MAX_SIZE/2))]);
			}

	}
	else
		printf("Queue empty\n");
}
void display(Queue *qu,int s)
{
	if(!isempty(qu))
	{
		int i;
		int n=1;
		int k=qu->front[s];
		int p=qu->rear[s];
		printf("Queue elements are\n");
		for(i=k;i!=p;(i++)%(MAX_SIZE/2+s*MAX_SIZE/2))
			printf("%s\n",qu->a[i]);
		printf("%s\n",qu->a[i%(MAX_SIZE/2+i*MAX_SIZE)]);
	}
	else
		printf("Queue empty\n");
}
