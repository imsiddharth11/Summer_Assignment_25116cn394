#include<stdio.h>
int main()
{
    int temp,n,c=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    
    temp=n;
    if(temp==0){
        printf("Entered number is armstrong number");
    }
    else{
        while(temp!=0){
            c++; //number of digit in n
            temp=temp/10;
        }
    
        temp=n;
        int rem,pow=1,sum=0,i;

        while(temp!=0){
            rem=temp%10;
            pow=1;
            for(i=1;i<=c;i++){
            pow=pow*rem;
            }
            temp=temp/10;
            sum=sum+pow;
        }
    
        if(sum==n)
        printf("Entered number is armstrong number");
        else
        printf("Entered number is NOT armstrong number");
    }
    return 0;
    }