#include<stdio.h>
int main()
{
    int n,mod,rev=0;
    printf("Enter the number\n");
    scanf("%d",&n);
  
    while(n!=0){
        mod=n%10;
        rev=rev*10+mod;
        n=n/10;
    }
    printf("Reverse of the number is %d",rev);
    return 0;
}