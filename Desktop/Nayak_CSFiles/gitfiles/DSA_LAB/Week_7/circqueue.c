#include "libcqueue.h"
void main()
{
	Queue qu;
	assign(&qu);
	char *l;
	l=(char *)malloc(sizeof(char));
	int ch;
	printf("Enter choice 1-Insert 2-Delete 3-Display 4-Exit\n");
	do
	{
		printf("Enter choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			printf("Enter string\n");
			scanf("%s",l);
			//printf("%s\n",l);
			insertq(&qu,l);
			break;
			case 2:
			deleteq(&qu);
			break;
			case 3:
			display(&qu);
			break;
		}
	}while(ch!=4);
	free(l);

}