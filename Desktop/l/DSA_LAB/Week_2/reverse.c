#include <stdio.h>
void reverse(int *,int *, int  );
void main()
{
	int i,a[100],n,f;
	int *p=a;
    printf("Enter the number of elements in array\n");
	scanf("%d",&n);
	printf("Enter the elemnts\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",p);
		p++;
	}
	p=a;
	reverse(a,p,n);
}
void reverse(int *a, int *p, int n)
{
  int *q=(p+n-1);
  int *t;
  int i;
  for(i=0;i<n/2;i++)
  	{
  		*t=*p;
  		*p=*q;
  		*q=*t;
  		p++;
  		q--;
        }
   p=a;
  printf("The array is\n");
   for(i=0;i<n;i++)
   {
   	printf("%d \n",*p );
   	p++;
   }
}