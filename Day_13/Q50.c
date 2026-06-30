#include<stdio.h>
int main ()
{
    int n,i;
    printf("Enter the size of elements:");
    scanf("%d",&n);
    int a[n],sum=0;
    float avg;
    printf("The elements of array are:\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    avg=sum/n;
    printf("\nSum of array=%d \n Average of array=%f",sum,avg);
    return 0;
}