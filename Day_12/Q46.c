#include<stdio.h>
#include<math.h>
int armstrong(int n);
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if (armstrong (n))
       printf("%d is an armstrong number",n);
    else
       printf("%d is not an armstrong number",n);
    return 0;
}
int armstrong(int n)
{
    int n1,n2,r,sum=0,c=0;
    n1=n;
    while(n1!=0)
    {
        c++;
        n1/=10;
    }
    n2=n;
    while(n2!=0)
    {
        r=n2%10;
        sum+=pow(r,c);
        n2/=10;
    }
    if (sum==n)
      return 1;
    else
       return 0;
}