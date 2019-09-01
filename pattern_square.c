#include<stdio.h>
void main()
{
    int i,j,k,n;
    printf("enter the size\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("* ");
    printf("\n");
    for(j=1;j<=n-2;j++)
    {
        for(k=1;k<=n;k++)
        {
            if(k==1 ||k==n)
                printf("* ");
                else
                    printf(" ");
        }
        printf("\n");
    }
     for(k=1;k<=n;k++)
        printf("* ");



}
