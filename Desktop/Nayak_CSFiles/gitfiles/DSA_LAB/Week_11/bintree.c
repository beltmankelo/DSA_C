#include<stdio.h>
#include<stdlib.h>	
typedef struct node{
	char data;
	struct node *lchild;
	struct node *rchild;
}*NODE;

NODE btcreate()
{
	NODE temp;
	char e;
	printf("Enter Z to stop\n");
	scanf(" %c",&e);
	if(e=='Z')
		return NULL;
	temp = (NODE)malloc(sizeof(struct node));
	temp->data=e;
	printf("Enter left child\n");
	temp->lchild=btcreate();
	printf("Enter right child\n");
	temp->rchild=btcreate();
	return temp;
}
void inorder(NODE p)
{
	if(p)
	{
		inorder(p->lchild);
		printf("%c",p->data);
		inorder(p->rchild);
	}
}
void preorder(NODE p)
{
	if(p)
	{
		printf("%c",p->data);
		preorder(p->lchild);
		preorder(p->rchild);
	}
}
void postorder(NODE p)
{
	if(p)
	{
		postorder(p->lchild);
		postorder(p->rchild);
		printf("%c",p->data);
	}
}
void main()
{
	NODE s=btcreate();
	printf("INORDER TRAVERSAL\n");
	inorder(s);
	printf("\nPREORDER TRAVERSAL\n");
	preorder(s);
	printf("\nPOSTORDER TRAVERSAL\n");
	postorder(s);
}
