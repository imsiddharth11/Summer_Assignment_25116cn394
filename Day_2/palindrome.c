#include<stdio.h>
int main()
{
    int n,mod,num,rev=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    
    num=n;
    while(n!=0){
        mod=n%10;
        rev=rev*10+mod;
        n=n/10;
    }
    printf("Reverse of the number is %d\n",rev);

    if(num==rev)
    printf("Number is palindrome");
    else
    printf("Number is not palindrome");
    return 0;
}