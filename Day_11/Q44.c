#include<stdio.h>
int fact(int m);
int main ()
{
    int n,f;
    printf("Enter the number:");
    scanf("%d",&n);
    f=fact(n);
    printf("the factorial of %d is %d",n,f);
    return 0;
}
int fact(int m)
{
    if(m==0)
        return 1;
    else
        return (m*fact(m-1));
}