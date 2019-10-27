#define MAX_SIZE 15
typedef struct{
	int top;
	int a[MAX_SIZE];
}Stack;

void assign(Stack *st)
{
	st->top=-1;
}
int isFull(Stack *st)
{
	if(st->top>MAX_SIZE)
	{
		return 0;
	}
	return 1;
}
int isEmpty(Stack *st)
{
	if(st->top==-1)
		return 0;
	return 1;

}
void push(Stack *st,int l)
{
	if(isFull(st))
	{
		st->a[++(st->top)]=l;
	}
	else 
		printf("Stack overflow\n");

}
int pop(Stack *st)
{
	if(isEmpty(st))
	{
		//printf("Deleting %c \n",st->a[(st->top)]);
	    return (st->a[(st->top)--]);
	}
	else
		printf("Stack underflow\n");
}
void display(Stack *st)
{
	int i;
	if(isEmpty(st))
	{
	printf("Stack elements are\n");
	for(i=st->top;i>=0;i--)
		printf("%d",st->a[i]);
    }
    else
    	printf("No elements\n");
    printf("\n");
}