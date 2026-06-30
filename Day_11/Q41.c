#include<stdio.h>
int sum(int a, int b);
int main ()
{
    int n1,n2,add;
    printf("enter the two numbers:");
    scanf ("%d %d",&n1,&n2);
    add=sum(n1,n2);
    printf("Sum=%d",add);
    return 0;
}
int sum(int a,int b)
{
    return a+b;
}