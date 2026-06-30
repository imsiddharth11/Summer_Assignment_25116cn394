#include<stdio.h>
int main()
{
    int i,n,large,seclarge;
    printf("Enter the size of elememt :");
    scanf("%d",&n);
    int a[n];
    printf("The Elements of array are:\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    large=a[0];
    seclarge=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>large)
        {
            seclarge = large;
            large=a[i];
        }
        else if(a[i]>seclarge && a[i]!=large)
            seclarge=a[i];
    }
    printf("Second Largest element of Array is %d",seclarge);
    return 0;
}