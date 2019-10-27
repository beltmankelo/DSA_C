#include "libtwoq.h"
void main()
{
	Queue qu;
	assign(&qu);
	char *l;
	l=(char *)malloc(sizeof(char));
	int ch,i;
	printf("Enter choice 1-Insert 2-Delete 3-Display 4-Exit\n");
	do
	{	
		printf("Enter queue number and choice\n");
		scanf("%d %d",&(i),&ch);
		i-=1;
		switch(ch)
		{
			case 1:
			printf("Enter string\n");
			scanf("%s",l);
			//printf("%s\n",l);
			insertq(&qu,l,i);
			break;
			case 2:
			deleteq(&qu,i);
			break;
			case 3:
			display(&qu,i);
			break;
		}
	}while(ch!=4);
	free(l);

}