#include<stdio.h>
int main()
{
    int i,j,n,ele,c=0;
    printf("Enter the size of elememt :");
    scanf("%d",&n);
    int a[n];
    printf("The Elements of array are:\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("Duplicates elements are:\n");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                printf("%d\n",a[i]);
                break;
            }
        }
    }
    return 0;
}