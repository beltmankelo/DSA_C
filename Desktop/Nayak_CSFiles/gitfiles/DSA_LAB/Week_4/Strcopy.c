#include<stdio.h>
char *strcopy(char [],char []);
void main()
{
	printf("Enter the string\n");
	char str[100];
	scanf("%s",str);
	char strc[100];
	printf("Enter choice 1- Copy 2- Display 3-Exit\n");
	int ch;
	  char *strn;
	while (ch!=3)
	{
	printf("Enter choice\n");
	scanf("%d",&ch);
	switch (ch)
	{
		case 1:
	    strn=strcopy(str,strc);
	    break;
	    case 2:
	    printf("%s\n",strn);
	    break;
	}
}
}
char *strcopy(char str[100],char strc[100])
{
	static int i=0;
	//printf("%d\n",i );
	if(str[i]=='\0')
		//printf("%s",strc );
		return strc;
	else
	{
		strc[i]=str[i];
		i++;
		return (strcopy(str,strc));
	}
}