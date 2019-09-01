#include<stdio.h>
int main()
{
    int i,n,k=0,count1=0,rem,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=(10*k)+1;//for getting number of 111111 so that the expression can be solved
    }

    for(i=1;i<=4*k;i++)
    {
        while(i!=0)
        {
            rem=i%10;
            i=i/10;
            if(rem==1||rem==2||rem==3||rem==4)
            {
                if(rem==4)//gustavo son's flaw since he thinks that both 1 and 4 are same
                    rem=1;
            }
            sum+=rem;
        }
        if(sum==n);
        count1++;
    }
    printf("%d",count1);

    return 0;
}

