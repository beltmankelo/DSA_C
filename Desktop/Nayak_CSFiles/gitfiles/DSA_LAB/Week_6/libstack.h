#define MAX_SIZE 4
typedef struct{
	int top[2];
	int a[MAX_SIZE];
}Stack;
//int bn[2];
//static int i;
void assign(Stack *st)
{
	st->top[0]=-1;
	st->top[1]=MAX_SIZE;
	//for(j=1;j<2;i++)
	//st->top[j]=bn[j]=(MAX_SIZE/2)*j;
}
int isFull(Stack *st)
{
	if(st->top[0]==st->top[1]-1)
	{
		return 0;
	}
	return 1;
}
int isEmpty(Stack *st)
{
	if(st->top[0]==-1&&st->top[1]==MAX_SIZE)
		return 0;
	return 1;

}
void push(Stack *st,int l,int i)
{
	if(isFull(st))
	{
		if(!i)
		st->a[++(st->top[i])]=l;
		else
		st->a[--(st->top[i])]=l;
	}
	else 
		printf("Stack overflow\n");

}
int pop(Stack *st,int i)
{
	if(isEmpty(st))
	{
		if(!i)
		//printf("Deleting %c \n",st->a[(st->top)]);
	    return (st->a[(st->top[i])--]);
		else
		return (st->a[(st->top[i])++]);
	}
	else
		printf("Stack underflow\n");
}
void display(Stack *st,int i)
{
	int j;
	if(isEmpty(st))
	{
	printf("Stack elements are\n");
	if(!i)
	    for(j=st->top[i];j>=0;j--)
		printf("%d",st->a[j]);
	else
		for(j=st->top[i];j<MAX_SIZE;j++)
		printf("%d",st->a[j]);
	}
    else
    	printf("No elements\n");
    printf("\n");
}