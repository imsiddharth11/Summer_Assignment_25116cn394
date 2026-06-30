#include<stdio.h>
int prime(int a);
int main ()
{
    int n,add;
    printf("enter the number:");
    scanf ("%d",&n);
    if(prime(n))
        printf("%d is a prime number",n);
    else
        printf("%d is not a prime number",n);
    return 0;
}
int prime(int a)
{
    int i;
    for(i=2;i<a;i++)
    {
        if(a%i==0)
            return 0;
    }
    return 1;
}