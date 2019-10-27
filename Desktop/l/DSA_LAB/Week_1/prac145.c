#include <stdio.h>
#include<stdlib.h>
int *Lsearch(int *, int , int );
void main()
{
	printf("Enter option (1) Linear Search (2) Matrix display");
	int o;
	int i,n,f;
    int *p;
int **a;
    int m,j;
	int *pw;
	scanf("%d",&o);
	switch(o)
	{
    case 1:
	
    printf("Enter the number of elements in array\n");
	scanf("%d",&n);
	pw=(int*) calloc(n+1,sizeof(int));
	p=pw;
	printf("Enter the elemnts\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",p);
		p++;
	}
	p=pw;
	printf("Enter the element you want to find");
	scanf("%d",&f);
	int *pos=Lsearch(p,n,f);
	if(*pos)
	   printf("The element %d is at position %d \n", f,*pos+1);
    else
       printf("The element %d was not found \n", f);
   free(pw);
   break;
 case 2:
    
    printf("Enter the number of elements in array 1\n");
	scanf("%d %d",&m,&n);
	
	a=(int**)calloc(m+1,sizeof(int*));
		
    for(i=0;i<m;i++)
       a[i]=(int*)calloc(n+1,sizeof(int));
		printf("Enter the elemnts for array 1\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		  scanf("%d",a[i]+j);
		printf("The matrix is\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		  printf("%d",*(*(a+i)+j));
		printf("\n");
	}
	for(i=0;i<m;i++)
       free(a[i]);
	free(a);


	}
}	
int *Lsearch(int *p,int n, int f)
{
	int *pos,i;
	for(i=0;i<n;i++)
	{
		if(*p==f)
			{
				*pos=i;
				return pos;
			}
		p++;
	}
	if(i==n)
		return NULL;
}