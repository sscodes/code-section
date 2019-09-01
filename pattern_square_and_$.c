#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter the limit\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==1||i==n)
            printf("$");
        else
            printf("*");
    }

}

