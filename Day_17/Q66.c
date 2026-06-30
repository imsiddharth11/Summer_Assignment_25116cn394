#include<stdio.h>
int main ()
{
    int n1,n2,i,j,k,a[100],b[100],c[100];
    printf("Enter the number of elements in first array:");
    scanf("%d",&n1);
    printf("The elements of first array are:\n");
    for(i=0;i<n1;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the number of elements in second array:");
    scanf("%d",&n2);
    printf("The elements of second array are:\n");
    for(i=0;i<n2;i++)
    {
        printf("b[%d]=",i);
        scanf("%d",&b[i]);
    }
    for(i=0;i<n1;i++)
    {
        c[i]=a[i];
    }
    k=n1;
    for(i=0;i<n1;i++)
    {
        int found=0;
        for(j=0;j<n2;j++)
        {
            if(a[i]==b[j])
            {
                found=1;
                break;
            }
        }
        if(found==0)
        {
            c[k++]=b[i];
        }
    }
    printf("Union of arrays is:\n");
    for(i=0;i<k;i++)
    {
        printf("c[%d]=%d\n",i,c[i]);
    }
    return 0;
}