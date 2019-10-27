#include<stdio.h>
#include<math.h>
static int a,b,c;
static float r1,r2,d;
 void getdata()
{
	printf("Enter the a,b and c of quadratic equation in the form ax^2+bx+c ");
	scanf("%d %d %d",&a,&b,&c);

}
void computeroots()
{
	
	d=b*b-4*a*c;
	if(d=0)
	{
	  r1=-b/2*a;
	  r2=-b/2*a;
	}
	else if(d>0)
	{
	 r1=-b+sqrt(d)/2*a;
	 r2=-b-sqrt(d)/2*a;
	}
	else
	{
	  r1=-b;
	 r2=sqrt(-d)/2*a;
	}
}
void printroots()
{ 
    if(d=0)
	printf("The roots are real= %lf and %lf",r1,r2);
	else if(d>0)
	printf("The roots are real=%lf and %lf",r1,r2);
	else
	printf("The roots are imaginary=%lf +i%lf and %lf -i%lf",r1,r2,r1,r2);
}
void main()
{
	getdata();
	computeroots();
	printroots();
}