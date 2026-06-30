#include<stdio.h>
int main ()
{
    int n,i,even=0,odd=0;
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
        if(a[i]%2==0)
            even++;
        else
            odd++;
    }
    printf("Even elements:%d \nOdd elements:%d",even,odd);
    return 0;
}