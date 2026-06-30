#include<stdio.h>
int main ()
{
    int n,i,sum=0,totalsum,m;
    printf("Enter the number of elements in array:");
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
        sum+=a[i];
    }
    totalsum=((n+1)*(n+2))/2;
    m=totalsum-sum;
    printf("Missing number is %d",m);
    return 0;
}