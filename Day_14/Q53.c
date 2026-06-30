#include<stdio.h>
int main()
{
    int i,n,loc=-1,ele;
    printf("Enter the size of elememt :");
    scanf("%d",&n);
    int a[n];
    printf("The Elements of array are:\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("enter the element to be searched:");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(a[i]==ele)
        {
            loc=i+1;
            printf("element is found at %d location",loc);
            break;
        }
    }
    if(loc==-1)
        printf(" search is unsuccesful:");
return 0;
}