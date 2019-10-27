#include "libqusearch.h"
void main()
{
	Queue qu;
	assign(&qu);
	char l;
	char k,m;
	//l=(char )malloc(sizeof(char));
	int ch;
	printf("Enter choice 1-Insert 2-Display 3-Search 4-Exit\n");
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
			insertq(&qu,l);
			break;
			case 2:
			display(&qu);
			break;
			case 3:
			printf("Enter element to search\n");
			scanf(" %c",&k);
			int f=0;
			Queue qs;
			assign(&qs);
			while(!isfull(&qs))
				{
					m=deleteq(&qu);
					if(k==m)
						f=1;
					insertq(&qs,m);
				}
			qu=qs;
			if(f)
				printf("Element found\n");
			else
				printf("Element not found\n");
			break;
		}
	}while(ch!=4);
//	free(l);

}