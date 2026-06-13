#include<stdio.h>
int main()
{
    int n,mod,sum=0;
    printf("Enter the number\n");
    scanf("%d",&n);

    while(n!=0){
        mod=n%10;
        sum=sum+mod;
        n=n/10;
    }
    printf("The sum of the digit of the is %d",sum);
    return 0;
}