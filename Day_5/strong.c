#include<stdio.h>
int main(){
    int i,n;

    printf("Enter the number\n");
    scanf("%d",&n);

    int temp=n,digit,fact=1,sum=0;
    while(temp!=0){
        digit=temp%10;
        fact=1;
        for(i=1;i<=digit;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(sum==n)
    printf("Strong Number");
    else
    printf("NOT Strong Number");

    return 0;
}