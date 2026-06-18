//I learned this code later

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

    printf("%lld is the binary result of %d\n", binary, decimal);

    return 0;
}