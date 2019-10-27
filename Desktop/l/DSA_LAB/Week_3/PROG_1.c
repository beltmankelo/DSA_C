#include<stdio.h>
#include<stdlib.h>
void main()
{
	int m,n,i,j,**a;
	printf("Enter the number of rows in array 1\n");
	scanf("%d",&m);
	
	a=(int**)calloc(m+1,sizeof(int*));
		
    for(i=0;i<m;i++)
    {
       printf("Enter the number of element in row %d \n",i);
       scanf("%d",&n);
       a[i]=(int*)calloc(n+1,sizeof(int));
       printf("Enter the elements of array in row %d \n",i);
	   for(j=1;j<=n;j++)
		  scanf("%d",a[i]+j);
       a[i][0]=n;
    }
    a[i]=NULL;
    for(i=0;i<m;i++)
    {
    	printf("\nRow %d elements are:",i );
    	for(j=1;j<=*a[i];j++)
    		printf("%d ",a[i][j]);

    }
    for(i=0;i<m;i++)
       free(a[i]);
	free(a);
}