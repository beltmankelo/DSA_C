#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *y,a[100];
	printf("Enter rows of array");
	int i,n;
	scanf("%d",&n);
	y=(int*)malloc(sizeof(int));
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
    y=a;
	for(i=0;i<n;i++);
     printf("%d",*(y++));
 
    for(i=0;i<n;i++)
     printf("%d",*(--y));
    y=NULL;
    free(y);
}