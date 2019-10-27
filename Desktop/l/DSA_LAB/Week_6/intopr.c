#include<stdio.h>
#include<string.h>
#include"libpre.h"
int main()
{
char ch;
int l, i = 0;
printf("\n Enter Infix Expression : ");
gets(infix);
l = strlen(infix);
while(l > 0)
{
ch = infix[--l];
switch(ch)
{

case ' ' : break;
case ')' :
case '+' :
case '-' :
case '*' :
case '/' :
case '^' :
case '%' :
push(ch); /* check priority and push */
break;
case '(' :
pop();
break;
default :
insert_beg(ch);
}
}
while( top > 0 )
{
insert_beg( opstack[--top]);
j++;
}
prefix[j] = '\0';
printf("\n Infix Expression : %s ", infix);
printf("\n Prefix Expression : %s ", prefix);
return 0;
}