#include<stdio.h>
int main(){
    int n,i,a,b,sum=0,term;
    printf("Enter the number of term in  Fibonacci series \n");
    scanf("%d",&n);

    a=0;
    b=1;
    for(i=0;i<n;i++){
        sum=a+b;
        term=a;
        a=b;
        b=sum;   
    }
    printf("nth  term of Fibonacci  series is %d\n",term);
    return 0;
}