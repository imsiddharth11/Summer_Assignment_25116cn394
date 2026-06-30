#include<stdio.h>
int main ()
{
    int n,i;
    printf("Enter the size of elements:");
    scanf("%d",&n);
    int a[n];
    printf("The elements of array are:\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    int last=a[n-1];
    for(i=n-1;i>=0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=last;
    printf("Array after right rotation:\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
    return 0;
}