#include<stdio.h>
int main()
{
	int n, i, j, t=0;
	printf("Enter no. of elements: ");
	scanf("%d", &n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ", a[i]);
	}
}