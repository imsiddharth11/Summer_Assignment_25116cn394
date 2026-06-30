#include<stdio.h>
int main ()
{
    int n,i,j,m=0,r;
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
        int c=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
                c++;
        }
        if(c>m)
        {
            m=c;
            r=a[i];
        }
    }
    printf("Maximum frequency element of array is %d",r);
    return 0;
}