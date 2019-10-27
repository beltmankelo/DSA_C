#include<stdio.h>
int toh(int n, char a, char c, char b)
{
    //printf("%d\n",n );
	if(n==1)
	{
		printf("Moving disk %d from %c to %c\n",n,a,c);
		return 0 ;
	}
		toh(n-1,a,b,c);
		printf("Moving disk %d from %c to %c\n",n,a,c);
		toh(n-1,b,c,a);
}

void main()
{
	
	int n;
	printf("Number of discs\n");
	scanf("%d",&n);

	toh(n,'a','c','b');

} 