#include<stdio.h>
int main()
{
    int n,i,c,a=0,b=1;
    printf("Enter the number of terms to be printed\t");
    scanf("%d",&n);
    printf("\n%d %d",a,b);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        printf(" %d ",c);
        a=b;
        b=c;

    }
    return 0;
}
