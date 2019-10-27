#include<stdio.h>
double add(double *,int);
void main()
{
	double a[100];
	double *p=a;
	int n;
	int i;
	printf("Enter the number of elements in array\n");
	scanf("%d",&n);
	printf("Enter the elemnts\n");
	for(i=0;i<n;i++)
	{
		scanf("%lf",p);
		p++;
	}
	p=a;
    double s=add(p,n);
    printf("The sum is %lf \n",s);

}
double add(double *p,int n)
{
	int i;
	double s=0;
	for(i=0;i<n;i++)
	{
      s=s+*p;
      p++;
	}
	return s;
}
