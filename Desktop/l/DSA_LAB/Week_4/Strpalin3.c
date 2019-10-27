#include<stdio.h>
#include<stdlib.h>
int strpalin(char *, char *);
void main()
{
	char *str;
	str=(char *)calloc(100,sizeof(char));
	printf("Enter the string\n");
	scanf("%s",str);
	int l=0;
	for(;str[l]!='\0';l++);
	char *str2=str+l-1;
	strpalin(str,str2);
	free(str);
}
int strpalin(char * str, char * str2)
{

	if(*str!=*str2)
		printf("String is not palindrome\n");
	else if (*str=='\0')
		 printf("String is a palindrome\n");
	else
		return (strpalin(str+1,str2-1));

}

