#include "lib4.h"
#include "libstack2.h"
void main()
{
	Queue qu;
	Stack s;
	qassign(&qu);
	assign(&s);
	int l,ch;
	printf("Enter choice 1-Insert 2-Reverse 3-Display 4-Exit\n");
	do
	{
		printf("Enter choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			printf("Enter number\n");
			scanf("%d",&l);
			//printf("%s\n",l);
			insertq(&qu,l);
			break;
			case 2:
			while(!qisempty(&qu))
			{
				push(&s,deleteq(&qu));
			}
			while(isEmpty(&s))
				insertq(&qu,pop(&s));
			break;
			case 3:
			qdisplay(&qu);
			break;
		}
	}while(ch!=4);
}