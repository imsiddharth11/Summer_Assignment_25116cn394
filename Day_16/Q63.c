#include<stdio.h>
int main ()
{
    int n,i,j,sum;
    printf("Enter the size of elements:");
    scanf("%d",&n);
    int a[n];
    printf("The elements of array are:\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the sum:");
    scanf("%d",&sum);
    int x =-1,y=-1;
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] + a[j]==sum)
            {
                x=a[i];
                y=a[j];
                break;
            }
        }
    }
    if(x!=-1)
        printf("pair: %d %d",x,y);
    else
        printf("pair not found");
    return 0;
}