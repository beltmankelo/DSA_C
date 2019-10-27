#include<stdio.h>
#include<stdlib.h>
double add(double *,double *,int);
//void freeup(double *p,double *pw)
//{
  //   int i;
   
  
     
//}
void main()
{
	double *p,*pw,*ps;
        int n;
        p=(double*)calloc(n+1,sizeof(double));
	pw=p;
	ps=p;
	printf("Enter the number of elements in array\n");
	scanf("%d",&n);
	printf("Enter the elemnts\n");
	for(pw=ps;pw<(ps+n);pw++)
	{
		scanf("%lf",pw);
		
	}

    double s=add(pw,ps,n);
    printf("The sum is %lf \n",s);
    free(p);  
    
}
double add(double *pw,double *ps,int n)
{
	
	double s=0;
	for(pw=ps;pw<(ps+n);pw++)
	{
         s=s+*pw;
         
	}
          
	return s;
}

