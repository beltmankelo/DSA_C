#include <stdio.h>
int Lsearch(int *, int , int );
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
	printf("Enter the element you want to find");
	scanf("%d",&f);
	int pos=Lsearch(p,&n,&f);
	if(pos)
	   printf("The element %d is at position %d \n", f,pos+1);
    else
       printf("The element %d was not found \n", f);
}
int Lsearch(int *p,int n, int f)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(*p==f)
			return i;
		p++;
	}
	if(i==n)
		return 0;
}