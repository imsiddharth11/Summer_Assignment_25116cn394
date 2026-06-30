#include<stdio.h>
int maximum(int a, int b);
int main ()
{
    int n1,n2,max;
    printf("enter the two numbers:");
    scanf ("%d %d",&n1,&n2);
    max=maximum(n1,n2);
    printf("Maximum number=%d",max);
    return 0;
}
int maximum(int a,int b)
{
    if (a>b)
        return a;
    else
        return b;
}