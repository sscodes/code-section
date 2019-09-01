#include<stdio.h>
int main()
{
    int arr[20],n,i,sum=0;
    float mean;
    printf("Enter the number of terms to be entered\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter the value of arr[%d]\t",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    mean=(float)sum/(float)n;
    printf("%f
            is mean",mean);
}
