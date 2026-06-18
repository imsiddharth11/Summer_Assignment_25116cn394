#include<stdio.h>
int main(){
    int decimal,temp,setbits=0;
    printf("Enter the number\n");
    scanf("%d",&decimal);

    temp=decimal;
    while(temp!=0){
        int rem=temp%2;
        if(rem==1)
        setbits=setbits+1;
        
        temp=temp/2;
    }
    printf("%d is the set bits count of %d",setbits,decimal);
    return 0;
}