#include<stdio.h>
int main ()
{
    int n,i,min,max;
    printf("Enter the size of elements:");
    scanf("%d",&n);
    int a[n];
    printf("The elements of array are:\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(min>a[i])
            min=a[i];
        if(max<a[i])
            max=a[i];
    }
    printf("\nMinimum element of array:%d \nMaximum element of array:%d",min,max);
    return 0;
}