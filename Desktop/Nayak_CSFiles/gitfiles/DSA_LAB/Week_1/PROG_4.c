#include<stdio.h>
#include<stdlib.h>
void multi (int a[30][30],int b[30][30],int m,int n,int p,int q);
void main()
{
	int i,j,a[30][30],b[30][30],m,n,p,q;
    printf("Enter the number of elements in array 1\n");
	scanf("%d %d",&m,&n);
	printf("Enter the number of elements in array 2\n");
	scanf("%d %d",&p,&q);
	if(n!=p)
        {
        	printf("Arrays not compatible\n");
		    exit(0);
		}

	printf("Enter the elemnts for array 1\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		  scanf("%d",&a[i][j]);

	printf("Enter the elemnts for array 2\n");
	for(i=0;i<p;i++)
		for(j=0;j<q;j++)
		  scanf("%d",&b[i][j]);

	multi(a,b,m,n,p,q);

	
}

void multi(int a[30][30],int b[30][30],int m, int n, int p, int q)
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