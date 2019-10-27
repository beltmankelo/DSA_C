#include "libdequeue.h"
void main()
{
	DeQueue qu;
	assign(&qu);
	int l,ch;
	printf("Enter choice 1-Insert(Front) 2-Insert(Rear) 3-Delete(Front) 4-Delete(Rear) 5-Display 6-Exit\n");
	do
	{
		printf("Enter choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			printf("Enter character\n");
			scanf("%d",&l);
			enQueueF(&qu,l);
			break;
			case 2:
			printf("Enter character\n");
			scanf("%d",&l);
			enQueueR(&qu,l);
			break;
			case 3:
			deQueueF(&qu);
			break;
			case 4:
			deQueueR(&qu);
			break;
			case 5:
			display(&qu);
			break;
		}
	}while(ch!=6);
}	