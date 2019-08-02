#include<stdio.h>
#include<stdlib.h>
struct array
{
    int *p;
    int length;
    int size;
};
void display(struct array);
int linear_search(struct array*,int);
void swap(int*,int*);
int main()
{
    struct array arr;
    int i,n;
    printf("\nEnter the size of array\n");
    scanf("%d",&arr.size);
    arr.p=(int*)malloc((arr.size)*sizeof(int));//dynamic declaration
    printf("Enter the number of numbers\n");
    scanf("%d",&arr.length);
    printf("Enter the numbers\n");
    for(i=0;i<arr.length;i++)
        scanf("%d",&arr.p[i]);
    printf("Enter the number to be searched\n");
    scanf("%d",&n);
    printf("%d\n",linear_search(&arr,n));
    display(arr);
    return 0;
}
void display(struct array arr)
{
    int i;
    for(i=0;i<arr.length;i++)
        printf("%d ",arr.p[i]);
}
void swap(int*x,int*y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int linear_search(struct array *arr,int n)//improvement in linear search
{
    int i;
    for(i=0;i<arr->length;i++)
    {
        if(arr->p[i]==n)
        {
            swap(&arr->p[i],&arr->p[0]);//swapping with the first element because for searching second time the same number it will be easier to get it
            return i;
        }
    }
    return -1;
}
