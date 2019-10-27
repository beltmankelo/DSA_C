#include<stdio.h>
int secbig(int [100],int *, int );
void main()
{
    int i,a[100],n;
	int *p=a;
    printf("Enter the number of elements in array\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",p);
		p++;
	}
	p=a;
	int s=secbig(a,p,n);
    printf("The second biggest in the above list is %d \n",s); 
}
int secbig(int a[],int *p,int n)
{
	int b,s,i;
	b=s=*p;
	for(i=0;i<n;i++)
		{
			if(*p>b)
			b=*p;
		    else if(*p<s)
			s=*p;
		    p++;
		}
    p=a;
    int se;
    if(*p==b)
         se=*(p+1);
    else
    	 se=*p;
    for(i=0;i<n;i++)
        {
         if(*p<b&&*p>s)
         {
         	if(*p>se)
         		se=*p;
         }
         p++;
        }
    return se;
}
