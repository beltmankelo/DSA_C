typedef struct stack{
	int top;
	char *a;
}Stack;
Boolean isFull(Stack *st);
Boolean isEmpty(Stack *st);
char pop(Stack *st);
void push(char ch,Stack *st);
void display(Stack *st);
