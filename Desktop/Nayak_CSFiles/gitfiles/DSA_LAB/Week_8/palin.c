#include "libdequeue.h"
void main()
{
	DeQueue qu;
	assign(&qu);
	int ch;
	char *l=(char *)malloc(sizeof(char));
	printf("Enter string\n");
	scanf("%s",l);
	int i=0;
	while(l[i]!='\0')
	{
		enQueueR(&qu,l[i]);
		i++;
	}
	int flag=1;
	printf("%d\n",i );
	i/=2;
	do
	{
		if(deQueueF(&qu)!=deQueueR(&qu))
			{
				flag=0;
				break;
			}
		else
			i--;
	}while(i);
	printf("%d\n",i );
	if(flag)
		printf("String is a palindrome\n");
	else
		printf("String is not a palindrome\n");
}	