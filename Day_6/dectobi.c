#include<stdio.h>
int main(){
    int decimal,temp,binary=0;
    printf("Enter the decimal number\n");
    scanf("%d",&decimal);
    temp=decimal;

    int rem,rev=1;
    while(temp!=0){
        rem=temp%2;
        rev=rev*10+rem;
        temp=temp/2;
    }
    
    //printf("%d\n",rev; to check my logic
    while(rev!=0){
        rem=rev%10;
        binary=binary*10+rem;
        rev=rev/10;
    }
    binary=binary/10;
    printf("%d is the binary result of  %d",binary,decimal);
    return 0;
}