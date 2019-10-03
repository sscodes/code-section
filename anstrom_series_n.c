#include<stdio.h>
#include<math.h>
int digits(int);
float angstrom(int);
int main()
{
    int N,i;
    printf("\nEnter the limit:\t");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        if (angstrom(i)==i)
            printf("%d is angstrom\n",i);
        else
            printf("\t%d is not angstrom\n",i);

    }
    return 0;
}
int digits(int N)
{
    int r=0;
    while(N!=0)
    {
        r=r+1;
        N=N/10;
    }
    return r;
}
float angstrom(int N)
{
    int k,rem;
    k=N;
    float sum=0.0;
    while(N!=0)
    {
        rem=N%10;
        sum+=pow(rem,(float)digits(k));
        N=N/10;

    }
    return sum;
}
