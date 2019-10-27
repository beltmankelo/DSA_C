#include<stdio.h>
#include<stdlib.h>	
#include<ctype.h>
#include<string.h>
typedef struct node{
	char data;
	struct node *lchild;
	struct node *rchild;
}*NODE;
int expe(NODE p)  
{  
    if (!p)  
        return 0;    
    if (!p->lchild && !p->rchild)  
        {
        	int k=p->data-'0';
        	return k;
        }  
    int l = expe(p->lchild);  
    int r = expe(p->rchild);  
    if (p->data=='+')  
        return l+r;    
    if (p->data=='-')  
        return l-r;  
    if (p->data=='*')  
        return l*r;
    else  
    	return l/r;  
}  
NODE etcreate(char exp[10])
{
	NODE tempa;
	NODE *stack;
	stack=(NODE*)calloc(100,sizeof(struct node));
	int top=-1;
	int i;
	for(i=0;exp[i]!='\0';i++)
		{
			if(exp[i]>=48&&exp[i]<=57)
				{
					++top;
					NODE t=(NODE)malloc(sizeof(struct node));
					t->data=exp[i];
					t->rchild=t->lchild=NULL;
					stack[top]=t;
				}
			else
			{
				NODE temp;
				temp=(NODE)malloc(sizeof(struct node));
				temp->data=exp[i];
				temp->rchild=stack[top--];
				temp->lchild=stack[top--];
				stack[++top]=temp;	
			}
		}
		tempa=stack[top--];
		return tempa;
}
void main()
{
	char p[20];
	printf("Enter a postorder expression\n");
	scanf("%s",p);
	NODE s=etcreate(p);
	printf("\nPOSTORDER EXPRESSION\n");
	printf("%s\n",p );
	printf("Evaluated expression\n");
	printf("%d\n",expe(s) );
}
