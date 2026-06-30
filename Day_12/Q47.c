#include<stdio.h>
int fibo(int m);
int main ()
{
    int n,i;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d \t",fibo(i));
    }
    return 0;
}
int fibo(int m)
{
    if(m==1)
        return 0;
    else if(m==2)
        return 1;
    else
        return (fibo(m-1)+fibo(m-2));
}