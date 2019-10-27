#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct ll
{
	struct ll * prev;
	int data;
	struct ll * next;
};

typedef struct ll * LL;

int check=0;

bool isEmpty(LL node)
{
	if(node->next==NULL && node->prev==NULL)
		return true;
	return false;
}

LL addBack(LL curr)
{
	int x;
	printf("Enter the data: ");
	scanf("%d", &x);

	if(!isEmpty(curr)||check!=0)
	{
		LL newNode;
		newNode=(LL)malloc(sizeof(struct ll));
		curr->next=newNode;		
		newNode->prev=curr;
		newNode->data=x;
		newNode->next=NULL;
		return newNode;
	}
	else
	{	
		curr->data=x;
		check=1;
		return curr;
	}

}
LL addFront(LL curr)
{
	int x;
	printf("Enter the data: ");
	scanf("%d", &x);
	if(!isEmpty(curr)||check!=0)
	{
		LL newNode;
		newNode=(LL)malloc(sizeof(struct ll));
		newNode->next=curr;
		newNode->prev=NULL;
		newNode->data=x;
		return newNode;
	}
	else
	{
		curr->data=x;
		check=1;
		return curr;
	}
}

LL deleteFront(LL curr)
{
	if(!isEmpty(curr))
	{	LL tempNode=curr;
		LL frontNode=curr->next;
		frontNode->prev=NULL;
		free(tempNode);
		return frontNode;
	}
	else
		printf("EMPTY\n");
	return NULL;
}
LL deleteBack(LL curr)
{
	if(!isEmpty(curr))
	{
		LL tempNode=curr;
		LL backNode=curr->prev;
		backNode->next=NULL;
		free(tempNode);
		return backNode;
	}
	else
		printf("EMPTY\n");
	return NULL;
}
LL display(LL curr)
{
	if(!isEmpty(curr))
		for(LL temp=curr;temp!=NULL;temp=temp->next)
			printf("%d ",temp->data);
	else
		printf("EMPTY\n");
	printf("\n");

}
void main()
{
	LL front;
	front=(LL)malloc(sizeof(struct ll));
	front->next=NULL;
	front->prev=NULL;
	LL currFront=front;
	LL currBack=front;
	int ch;
	printf("(1) Add front, (2) Add back (3) Delete front (4) Delete back (5) Display (6) Exit\n");
	
	while(true)
	{
		printf("Enter the choice: ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1: currFront=addFront(currFront);
					break;
			case 2: currBack=addBack(currBack);
					break;
			case 3: currFront=deleteFront(currFront);
					break;
			case 4: currBack=deleteBack(currBack);
					break;
			case 5: display(currFront);
					break;
			case 6: exit(0);

		}
	}

}
								