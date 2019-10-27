#include "libstack.h"
void main()
{
	Stack st,sp;
	assign(&st);
	assign(&sp);
	char l;
	int ch;
	printf("Enter choice 1-Insert 2-Delete 3-Display 4-Exit\n");
	do
	{
		printf("Enter choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			printf("Enter character\n");
			scanf(" %c",&l);
			//printf("%s\n",l);
			push(&st,l);
			break;
			case 2:
			if(!isEmpty(&sp))
			{
				while(isEmpty(&st))
				{
					char c=pop(&st);
					push(&sp,c);
				}
			}
			pop(&sp);
			break;
			case 3:
			display(&sp);
			display(&st);
			break;
		}
	}while(ch!=4);

}