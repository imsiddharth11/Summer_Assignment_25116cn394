#include<stdio.h>
int main(){
    int binary,temp,decimal;
    printf("Enter the binary number\n");
    scanf("%d",&binary);
    /*we can also use long long format,
    but for simlicity we used int format of binary*/

    temp=binary;
    int rem,power=1;
    while(temp!=0){
        rem=temp%10;
        decimal=decimal+rem*power;
        power=power*2;
        temp=temp/10;
    }
    printf("%d in the decimal conversion of binary number %d\n",decimal,binary);
    return 0;
}