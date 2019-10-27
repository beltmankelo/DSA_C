#include<stdio.h>
#include<stdlib.h>
#include "libstack2.h"
void main()
{
	Stack st;
	int n;
	assign(&st);
	printf("Enter number\n");
	scanf("%d",&n);
	int a[100];
	int i;
	printf("Enter array\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		push(&st,a[i]);
	int new[100];
	new[0]=pop(&st);
	printf("%d\n",new[0] );
	int k;
	printf("Enter elements to delete\n");
	scanf("%d",&k);
	int j;
	for(i=0,j=0;j<k;)
	{
		int e=pop(&st);
		printf("%d\n",e );
	if(e>new[i])
		{
			new[i]=e;
			j++;
		}
	else
		new[++i]=e;
    }
    printf("%d\n",i);
    for(j=0;j<i;j++)
    	printf("%d\n",new[i]);
}
		