#include<stdio.h>
int main()
{
    int a=0,b=1,c=0,i,k,n;
    printf("\nEnter the limit\t");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        k=b;
        a=b;
        b=c;
        if(i!=k && i!=c)
            printf("%d\n",i);
    }
}
