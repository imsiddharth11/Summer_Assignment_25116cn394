#include<stdio.h>
int main ()
{
    int n1,n2,i,j,a[100],b[100],c[100];
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
    int k=0;
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(a[i]==b[j])
            {
                c[k++]=a[i];
                break;
            }
        }
    }
    printf("Common elements of arrays are:\n");
    for(i=0;i<k;i++)
    {
        printf("c[%d]=%d\n",i,c[i]);
    }
    return 0;
}