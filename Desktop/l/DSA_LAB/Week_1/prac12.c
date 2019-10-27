#include<stdio.h>
#include<stdlib.h>
void multi (int **,int **,int m,int n,int p,int q);
void main()
{
	int i,j,m,n,p,q;
	int **a,**b;
    printf("Enter the number of elements in array 1\n");
	scanf("%d %d",&m,&n);
	printf("Enter the number of elements in array 2\n");
	scanf("%d %d",&p,&q);
	if(n!=p)
        {
        	printf("Arrays not compatible\n");
		    exit(0);
		}
	a=(int**)calloc(m+1,sizeof(int*));
	b=(int**)calloc(p+1,sizeof(int*));	
    for(i=0;i<m;i++)
       a[i]=(int*)calloc(n+1,sizeof(int));
	for(j=0;j<p;j++)
		b[j]=(int*)calloc(q+1,sizeof(int));
	printf("Enter the elemnts for array 1\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		  scanf("%d",&a[i][j]);

	printf("Enter the elemnts for array 2\n");
	for(i=0;i<p;i++)
		for(j=0;j<q;j++)
		  scanf("%d",&b[i][j]);

	multi(a,b,m,n,p,q);
    	
    for(i=0;i<m;i++)
       free(a[i]);
	for(j=0;j<p;j++)
		free(b[j]);
	free(a);
	free(b);

	
}

void multi(int **a,int **b,int m, int n, int p, int q)
{
	int c[30][30];
	int i,j,k;
	for(i=0;i<m;i++)
		 for(j=0;j<q;j++)
		    	{
		    		c[i][j]=0;
		   	        for(k=0;k<n;k++)
			        c[i][j]+=a[i][k]*b[k][j];
                }		
    printf("The multiplied array is\n");
    for(i=0;i<m;i++)
		{
		  for(j=0;j<q;j++)
		    {
		    	printf(" %d ",c[i][j]);
		    }
		    printf("\n");
		}

}