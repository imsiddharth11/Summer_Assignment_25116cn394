#include<stdio.h>
int main(){
    int n,i,a,b,sum=0;
    printf("Enter the number of terms in  Fibonacci series \n");
    scanf("%d",&n);

    a=0;
    b=1;
    for(i=0;i<n;i++){
        sum=a+b;
        printf("%d\t",a);
        a=b;
        b=sum;
    }
    return 0;
}