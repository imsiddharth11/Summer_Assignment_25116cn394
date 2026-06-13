#include<stdio.h>
int main()
{
    int n,mod,pdt=1;
    printf("Enter the number\n");
    scanf("%d",&n);
  
    while(n!=0){
        mod=n%10;
        pdt=pdt*mod;
        n=n/10;
    }
    printf("Reverse of the number is %d",pdt);
    return 0;
}