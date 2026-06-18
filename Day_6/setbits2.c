#include <stdio.h>
int main() {
    int decimal, temp;
    long long binary = 0;  /*lon long format because binary number can go upto large number of digits*/
    long long place = 1;

    printf("Enter the decimal number\n");
    scanf("%d", &decimal);

    temp = decimal;

    while (temp != 0) {
        int rem = temp % 2;

        binary = binary + rem * place;
        place = place * 10;
        temp = temp / 2;
    }
    temp=binary;
    int c=0;
    while(temp!=0){
        int rem=temp%10;

        if(rem==1)
        c=c+1;

        temp=temp/10;
    }
    printf("%d is the number of bits in %d",c,decimal);
    
    return 0;
}