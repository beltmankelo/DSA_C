
#include "liblist.h"
void main()
{
	list st;
	assign(st);
	int l;
	int ch;
	printf("Enter choice 1-Push 2-Pop 3-Display 4-Exit\n");
	do
	{
		printf("Enter choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			printf("Enter character\n");
			scanf("%d",&l);
			st=push(st,l);
			break;
			case 2:
			st=pop(st);
			break;
			case 3:
			display(st);
			break;
		}
	}while(ch!=4);

}