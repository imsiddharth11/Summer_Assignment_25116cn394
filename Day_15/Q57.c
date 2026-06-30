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
    printf("Reverse of array are:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
    return 0;
}