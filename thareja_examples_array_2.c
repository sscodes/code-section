#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 10
int main()
{
    int i,rand_no,arr[MAX];
    for(i=0;i<MAX;i++)
    {
        rand_no=rand()%MAX;
        arr[i]=rand_no;
    }
    for(i=0;i<MAX;i++)
        printf("\nThe element of arr[%d] is\t %d",i,arr[i]);
    return 0;
}
