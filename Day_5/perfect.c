#include<stdio.h>
int main(){
    int i,n,rem,temp,sum=0;

    printf("Enter the number\n");
    scanf("%d",&n);

    //A perfect number is usually defined as a positive integer that equals the sum of its proper divisors.
    //so we are considering positive integers input only

    temp=n;
    for(i=1;i<n;i++){
        rem=temp%i;
        if(rem==0)
        sum=sum+i;
    }
    if(sum==n)
    printf("Perfect Number\n");
    else
    printf("NOT a Perfect Number\n");

    return 0;
}