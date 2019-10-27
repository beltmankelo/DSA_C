#include<stdio.h>
#include<stdlib.h>
#include "libstud.h"
{
   Stud *st;
   st=(Stud*)calloc(2,sizeof(Stud));
   accept(st);
   
   printf("Student details");
   display(st);
   printf("Enter the number of Students you want to enter");
   int m,i;
   scanf("%d",&m);
   Stud *sw,*s;
   sw=(Stud*)calloc(m+1,sizeof(Stud));
   s=sw;
   for (i=0;i<m;i++)
   	{
   		accept(s);
   		s++;
   	}
   s=sw;
    for (i=0;i<m;i++)
   {
    display(s);
    s++;
   }
   s=sw;
   studsort(s,m);
   printf("Student details");
   s=sw;
   for (i=0;i<m;i++)
   {
    display(s);
    s++;
   }
   free(sw);
   free(st);
}


