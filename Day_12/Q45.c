#include<stdio.h>
int palindrome(int n);
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    if (palindrome(n))
        printf("%d is a palindrome number",n);
    else
        printf("%d is not a palindrome number",n);
    return 0;
}
int palindrome(int n)
{
    int rev=0,rem,n1;
    n1=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if (n1==rev)
        return 1;
    else
        return 0;
}