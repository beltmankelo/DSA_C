
#include "libprpo.h"
 
void main()
{
	Stack st;
	assign(&st);
	char *ch;
	ch=(char *)malloc(sizeof(char));
	char *cn;
	cn=(char *)malloc(sizeof(char));
	int i,j;
	printf("Enter:\n");
	scanf("%s",ch);
	int l=strlen(ch);
	for(i=l-1;i>=0;i--)
	{
		if(isdigit(ch[i])||isalpha(ch[i]))
		{
			char c[1];
			c[0]=ch[i];
			push(&st,c);
		}
		else
		{
			strcpy(cn,pop(&st));
			strcat(cn,pop(&st));
			char c[1];
			c[0]=ch[i];
			strcat(cn,c);
			push(&st,cn);
		}
	}
	//strcpy(cn,pop(&st));
	printf("%s\n",cn);
	ch=NULL;
	cn=NULL;
	free(ch);
	free(cn);
}

