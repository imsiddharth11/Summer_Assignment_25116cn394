#include<stdio.h>
int main()
{
    int i,n,ele,c=0;
    printf("Enter the size of elememt :");
    scanf("%d",&n);
    int a[n];
    printf("The Elements of array are:\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("enter the element of which frequency is to be find:");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(a[i]==ele)
        {
            c++;
        }
    }
    printf("Frequency of %d is %d",ele,c);
    return 0;
}