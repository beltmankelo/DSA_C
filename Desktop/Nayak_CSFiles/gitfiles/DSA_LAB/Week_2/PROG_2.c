#include <stdio.h>
int *p2f(int *,int *, int  );
void main()
{
	int i,a[100],n,f;
	int *p=a;
  int p2r;
  printf("Enter the number of elements in array\n");
	scanf("%d",&n);
	printf("Enter the elemnts\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",p);
		p++;
	}
	p=a;
	p2r=p2f(a,p,n);
  printf("A pointer has been returned containing the sum %d\n",*p2r);
  int aw;
  printf("Enter the input");
  scanf("%d",&aw);
  int *pw,**q;
  pw=&aw;
  q=&p;
  printf("%d\n",*pw);
  printf("%d\n",**q);
  printf("Demonstrated Pointer to Pointer");

}
int *p2f(int *a, int *p, int n)
{
  int *s;
  int i;
  for(i=0;i<n;i++)
  {
    printf("%d\n",*p);
    *s=*s+*p;
    p++;

  }
  printf("Pointers have successfully been passed\n");
  return s;
}
