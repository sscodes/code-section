#include<stdio.h>
int main()
{
	int i,n,c,b=1,a=0;
	printf("Enter the limit\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		c=a+b;
		printf(" %d ",c);
		a=b;
		b=c;
	}
	return 0;
}
