#include<stdio.h>
int main(){
    int lcm,gcd,a,b,big,sml,n;

    printf("Enter the numbers\n");
    scanf("%d%d",&a,&b);

    if(a>b)
    big=a,sml=b;
    else
    big=b,sml=a;
    n=1;
    while(n!=0){
        n=big%sml;
        big=sml;
        sml=n;
    }
    gcd=big;
    lcm=a*b/gcd;
    printf("LCM is %d\n",a*b/gcd);
    return 0;
}