#include<stdio.h>
int fib(int,int,int );
void main()
{
	printf("Enter the number\n");
	int n;
	scanf("%d",&n);
	printf("0 ");
	fib(n,0,1);	//fib(n);

}
int fib(int n,int x, int y)
{
    printf("%d %d %d ",n,x,y );
	if(y<=n)
		{
		printf("%d ",y);
	    return fib(n,y,x+y);
	   }
}
