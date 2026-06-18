#include<stdio.h>
int main(){
    int n,x;
    printf("Enter x and n respectively\n");
    scanf("%d%d",&x,&n);
     
    int i,pow=1;
    for(i=1;i<=n;i++){
        pow=pow*x;
    }
    printf("x^n is %d",pow);
    return 0;
}